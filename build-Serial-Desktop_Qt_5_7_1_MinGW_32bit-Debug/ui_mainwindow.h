/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QComboBox *comboBox_databits;
    QComboBox *comboBox_stopbits;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox_baudrate;
    QLabel *label_3;
    QLabel *label_2;
    QComboBox *comboBox_parity;
    QLabel *label;
    QComboBox *comboBox_serialnum;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_scan;
    QPushButton *pushButton_open_close;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit_receive_data;
    QGroupBox *groupBox_3;
    QTextEdit *textEdit_send_data;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_clear_send;
    QPushButton *pushButton_send;
    QGroupBox *groupBox_4;
    QWidget *widget3;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox_receive_16byte;
    QCheckBox *checkBox_puse_receive;
    QCheckBox *checkBox_add_time;
    QCheckBox *checkBox_autoline;
    QPushButton *pushButton_save_data;
    QPushButton *pushButton_clear_receive;
    QGroupBox *groupBox_5;
    QCheckBox *checkBox_timer_send;
    QCheckBox *checkBox_16byte_send;
    QCheckBox *checkBox_send_new_line;
    QLineEdit *lineEdit_time;
    QLabel *label_6;
    QLabel *label_7;
    QCheckBox *checkBox_display_send;
    QWidget *widget4;
    QVBoxLayout *verticalLayout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(654, 564);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 171, 191));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 23, 151, 126));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_databits = new QComboBox(widget);
        comboBox_databits->setObjectName(QStringLiteral("comboBox_databits"));

        gridLayout->addWidget(comboBox_databits, 2, 1, 1, 1);

        comboBox_stopbits = new QComboBox(widget);
        comboBox_stopbits->setObjectName(QStringLiteral("comboBox_stopbits"));

        gridLayout->addWidget(comboBox_stopbits, 4, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setPointSize(10);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        comboBox_baudrate = new QComboBox(widget);
        comboBox_baudrate->setObjectName(QStringLiteral("comboBox_baudrate"));

        gridLayout->addWidget(comboBox_baudrate, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(true);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox_parity = new QComboBox(widget);
        comboBox_parity->setObjectName(QStringLiteral("comboBox_parity"));

        gridLayout->addWidget(comboBox_parity, 3, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_serialnum = new QComboBox(widget);
        comboBox_serialnum->setObjectName(QStringLiteral("comboBox_serialnum"));

        gridLayout->addWidget(comboBox_serialnum, 0, 1, 1, 1);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(8, 160, 158, 25));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_scan = new QPushButton(widget1);
        pushButton_scan->setObjectName(QStringLiteral("pushButton_scan"));

        horizontalLayout_2->addWidget(pushButton_scan);

        pushButton_open_close = new QPushButton(widget1);
        pushButton_open_close->setObjectName(QStringLiteral("pushButton_open_close"));

        horizontalLayout_2->addWidget(pushButton_open_close);

        pushButton_open_close->raise();
        pushButton_scan->raise();
        comboBox_serialnum->raise();
        label->raise();
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(190, 10, 441, 231));
        textEdit_receive_data = new QTextEdit(groupBox_2);
        textEdit_receive_data->setObjectName(QStringLiteral("textEdit_receive_data"));
        textEdit_receive_data->setGeometry(QRect(10, 20, 421, 201));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(190, 250, 441, 241));
        textEdit_send_data = new QTextEdit(groupBox_3);
        textEdit_send_data->setObjectName(QStringLiteral("textEdit_send_data"));
        textEdit_send_data->setGeometry(QRect(10, 20, 421, 181));
        widget2 = new QWidget(groupBox_3);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(10, 210, 421, 25));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_clear_send = new QPushButton(widget2);
        pushButton_clear_send->setObjectName(QStringLiteral("pushButton_clear_send"));

        horizontalLayout->addWidget(pushButton_clear_send);

        pushButton_send = new QPushButton(widget2);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));

        horizontalLayout->addWidget(pushButton_send);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 210, 171, 101));
        widget3 = new QWidget(groupBox_4);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(7, 21, 162, 69));
        gridLayout_2 = new QGridLayout(widget3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox_receive_16byte = new QCheckBox(widget3);
        checkBox_receive_16byte->setObjectName(QStringLiteral("checkBox_receive_16byte"));

        gridLayout_2->addWidget(checkBox_receive_16byte, 0, 0, 1, 2);

        checkBox_puse_receive = new QCheckBox(widget3);
        checkBox_puse_receive->setObjectName(QStringLiteral("checkBox_puse_receive"));

        gridLayout_2->addWidget(checkBox_puse_receive, 0, 2, 1, 1);

        checkBox_add_time = new QCheckBox(widget3);
        checkBox_add_time->setObjectName(QStringLiteral("checkBox_add_time"));

        gridLayout_2->addWidget(checkBox_add_time, 1, 0, 1, 2);

        checkBox_autoline = new QCheckBox(widget3);
        checkBox_autoline->setObjectName(QStringLiteral("checkBox_autoline"));

        gridLayout_2->addWidget(checkBox_autoline, 1, 2, 1, 1);

        pushButton_save_data = new QPushButton(widget3);
        pushButton_save_data->setObjectName(QStringLiteral("pushButton_save_data"));

        gridLayout_2->addWidget(pushButton_save_data, 2, 0, 1, 1);

        pushButton_clear_receive = new QPushButton(widget3);
        pushButton_clear_receive->setObjectName(QStringLiteral("pushButton_clear_receive"));

        gridLayout_2->addWidget(pushButton_clear_receive, 2, 1, 1, 2);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 320, 171, 151));
        checkBox_timer_send = new QCheckBox(groupBox_5);
        checkBox_timer_send->setObjectName(QStringLiteral("checkBox_timer_send"));
        checkBox_timer_send->setGeometry(QRect(10, 40, 71, 16));
        checkBox_16byte_send = new QCheckBox(groupBox_5);
        checkBox_16byte_send->setObjectName(QStringLiteral("checkBox_16byte_send"));
        checkBox_16byte_send->setGeometry(QRect(10, 20, 81, 16));
        checkBox_send_new_line = new QCheckBox(groupBox_5);
        checkBox_send_new_line->setObjectName(QStringLiteral("checkBox_send_new_line"));
        checkBox_send_new_line->setGeometry(QRect(90, 40, 71, 16));
        lineEdit_time = new QLineEdit(groupBox_5);
        lineEdit_time->setObjectName(QStringLiteral("lineEdit_time"));
        lineEdit_time->setGeometry(QRect(40, 60, 51, 20));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 60, 31, 21));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 64, 21, 16));
        checkBox_display_send = new QCheckBox(groupBox_5);
        checkBox_display_send->setObjectName(QStringLiteral("checkBox_display_send"));
        checkBox_display_send->setGeometry(QRect(90, 20, 71, 16));
        widget4 = new QWidget(centralWidget);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout = new QVBoxLayout(widget4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);
        groupBox_2->raise();
        groupBox_3->raise();
        groupBox->raise();
        groupBox_4->raise();
        groupBox_5->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 654, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(comboBox_stopbits, comboBox_baudrate);
        QWidget::setTabOrder(comboBox_baudrate, comboBox_databits);
        QWidget::setTabOrder(comboBox_databits, comboBox_parity);
        QWidget::setTabOrder(comboBox_parity, comboBox_serialnum);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        comboBox_databits->clear();
        comboBox_databits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
        );
        comboBox_stopbits->clear();
        comboBox_stopbits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1.5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        comboBox_baudrate->clear();
        comboBox_baudrate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        comboBox_parity->clear();
        comboBox_parity->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\227\240", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\245\207\346\240\241\351\252\214", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\201\266\346\240\241\351\252\214", Q_NULLPTR)
        );
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267", Q_NULLPTR));
        pushButton_scan->setText(QApplication::translate("MainWindow", "\346\211\253\346\217\217\344\270\262\345\217\243", Q_NULLPTR));
        pushButton_open_close->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\216\245\346\224\266\346\225\260\346\215\256", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", Q_NULLPTR));
        pushButton_clear_send->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201", Q_NULLPTR));
        pushButton_send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\346\216\245\346\224\266\350\256\276\347\275\256", Q_NULLPTR));
        checkBox_receive_16byte->setText(QApplication::translate("MainWindow", "16\350\277\233\345\210\266\346\230\276\347\244\272", Q_NULLPTR));
        checkBox_puse_receive->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234\346\216\245\346\224\266", Q_NULLPTR));
        checkBox_add_time->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\346\227\266\351\227\264\346\210\263", Q_NULLPTR));
        checkBox_autoline->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214", Q_NULLPTR));
        pushButton_save_data->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256", Q_NULLPTR));
        pushButton_clear_receive->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201\350\256\276\347\275\256", Q_NULLPTR));
        checkBox_timer_send->setText(QApplication::translate("MainWindow", "\345\256\232\346\227\266\345\217\221\351\200\201", Q_NULLPTR));
        checkBox_16byte_send->setText(QApplication::translate("MainWindow", "16\350\277\233\345\210\266\345\217\221\351\200\201", Q_NULLPTR));
        checkBox_send_new_line->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\226\260\350\241\214", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\345\221\250\346\234\237\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "ms", Q_NULLPTR));
        checkBox_display_send->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
