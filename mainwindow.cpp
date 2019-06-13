#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("串口调试助手");
    serialport = new QSerialPort;
}

MainWindow::~MainWindow()
{
    delete ui,serialport;
}



void MainWindow::scanPort()     //扫描串口
{
    ui->comboBox_serialnum->clear();
    foreach (const QSerialPortInfo &Info, QSerialPortInfo::availablePorts())
    {
        qDebug()<<"portNum:"<<Info.portName();
        qDebug()<<"Description:"<<Info.description();
        qDebug()<<"Manufacturer:"<<Info.manufacturer();
        QSerialPort serial;
        serial.setPort(Info);
        if(serial.open(QIODevice::ReadWrite))
        {
            ui->comboBox_serialnum->addItem(serial.portName());
        }
    }
}

void MainWindow::on_pushButton_scan_clicked()//扫描串口
{
    scanPort();
}

void MainWindow::on_pushButton_open_close_clicked()
{
    update();
    //设置串口号
    if("打开串口" == ui->pushButton_open_close->text())
    {
        serialport->setPortName(ui->comboBox_serialnum->currentText());
        if(serialport->open(QIODevice::ReadWrite))
        {
            //设置波特率
            serialport->setBaudRate(ui->comboBox_baudrate->currentText().toInt());
            //设置数据位
            serialport->setDataBits((enum QSerialPort::DataBits)(ui->comboBox_databits->currentText().toInt()));
            //校验位设置
            if("无"==ui->comboBox_parity->currentText())
                serialport->setParity(QSerialPort::NoParity);
            else if("奇校验" == ui->comboBox_parity->currentText())
                serialport->setParity(QSerialPort::OddParity);
            else if("偶校验" == ui->comboBox_parity->currentText())
                serialport->setParity(QSerialPort::EvenParity);
            else
                QMessageBox::information(this,tr("信息"),tr("校验位设置错误"));
            //停止位设置
            if("1" == ui->comboBox_stopbits->currentText())
                serialport->setStopBits(QSerialPort::OneStop);
            else if("1.5" == ui->comboBox_stopbits->currentText())
                serialport->setStopBits(QSerialPort::OneAndHalfStop);
            else if("2" == ui->comboBox_stopbits->currentText())
                serialport->setStopBits(QSerialPort::TwoStop);
            else
                QMessageBox::information(this,tr("信息"),tr("停止位设置错误"));
            //设置流控制
            serialport->setFlowControl(QSerialPort::NoFlowControl);
            //连接信号
            QObject::connect(serialport,&QSerialPort::readyRead,this,&MainWindow::readDate);
            ui->pushButton_open_close->setText("关闭串口");
        }
    }
    else

    {
        serialport->clear();//清空缓冲区
        serialport->close();//关闭串口
        ui->pushButton_open_close->setText("打开串口");
    }
}
void MainWindow::readDate()
{
    QByteArray buf;
    buf = serialport->readAll();
    qDebug()<< buf;
    if(!buf.isEmpty())
    {
        QString str = ui->textEdit_receive_data->toPlainText();
        str += tr(buf);
        str += " ";
        ui->textEdit_receive_data->clear();
        ui->textEdit_receive_data->append(str);
    }
    buf.clear();
}

void MainWindow::on_pushButton_clear_send_clicked()
{
    ui->textEdit_send_data->clear();
}

void MainWindow::on_pushButton_clear_receive_clicked()
{
    ui->textEdit_receive_data->clear();
}

void MainWindow::on_pushButton_send_clicked()
{
    serialport->write(ui->textEdit_send_data->toPlainText().toLatin1());
}
