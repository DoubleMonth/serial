#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void scanPort();

private slots:
    void on_pushButton_scan_clicked();
    void on_pushButton_open_close_clicked();
    void readDate();

    void on_pushButton_clear_send_clicked();

    void on_pushButton_clear_receive_clicked();

    void on_pushButton_send_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *serialport;
};

#endif // MAINWINDOW_H
