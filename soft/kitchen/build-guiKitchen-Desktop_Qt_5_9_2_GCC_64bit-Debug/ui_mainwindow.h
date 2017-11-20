/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QGroupBox *groupBox_lower;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_down;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_lowerHeater;
    QGroupBox *groupBox_upper;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_up;
    QPushButton *pushButton_upperHeater;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QGroupBox *groupBox_middle;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_bell;
    QPushButton *pushButton_middleHeater;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 689);
        MainWindow->setMaximumSize(QSize(600, 1024));
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(238, 238, 236);\n"
"border-color: rgb(211, 215, 207);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 4, 0, 1, 1);

        groupBox_lower = new QGroupBox(centralWidget);
        groupBox_lower->setObjectName(QStringLiteral("groupBox_lower"));
        gridLayout_3 = new QGridLayout(groupBox_lower);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_down = new QPushButton(groupBox_lower);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_down->sizePolicy().hasHeightForWidth());
        pushButton_down->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(pushButton_down, 0, 4, 1, 1);

        pushButton_4 = new QPushButton(groupBox_lower);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout_3->addWidget(pushButton_4, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(groupBox_lower);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout_3->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_1 = new QPushButton(groupBox_lower);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout_3->addWidget(pushButton_1, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(groupBox_lower);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout_3->addWidget(pushButton_2, 1, 2, 1, 1);

        pushButton_lowerHeater = new QPushButton(groupBox_lower);
        pushButton_lowerHeater->setObjectName(QStringLiteral("pushButton_lowerHeater"));
        sizePolicy1.setHeightForWidth(pushButton_lowerHeater->sizePolicy().hasHeightForWidth());
        pushButton_lowerHeater->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(pushButton_lowerHeater, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_lower, 3, 0, 1, 1);

        groupBox_upper = new QGroupBox(centralWidget);
        groupBox_upper->setObjectName(QStringLiteral("groupBox_upper"));
        gridLayout_4 = new QGridLayout(groupBox_upper);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton_11 = new QPushButton(groupBox_upper);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setMinimumSize(QSize(0, 0));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout_4->addWidget(pushButton_11, 0, 1, 1, 1);

        pushButton_12 = new QPushButton(groupBox_upper);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout_4->addWidget(pushButton_12, 0, 3, 1, 1);

        pushButton_up = new QPushButton(groupBox_upper);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        sizePolicy1.setHeightForWidth(pushButton_up->sizePolicy().hasHeightForWidth());
        pushButton_up->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(pushButton_up, 1, 4, 1, 1);

        pushButton_upperHeater = new QPushButton(groupBox_upper);
        pushButton_upperHeater->setObjectName(QStringLiteral("pushButton_upperHeater"));
        sizePolicy1.setHeightForWidth(pushButton_upperHeater->sizePolicy().hasHeightForWidth());
        pushButton_upperHeater->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(pushButton_upperHeater, 0, 0, 1, 1);

        pushButton_9 = new QPushButton(groupBox_upper);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout_4->addWidget(pushButton_9, 1, 0, 1, 1);

        pushButton_10 = new QPushButton(groupBox_upper);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout_4->addWidget(pushButton_10, 1, 2, 1, 1);


        gridLayout->addWidget(groupBox_upper, 0, 0, 1, 1);

        groupBox_middle = new QGroupBox(centralWidget);
        groupBox_middle->setObjectName(QStringLiteral("groupBox_middle"));
        pushButton_7 = new QPushButton(groupBox_middle);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(107, 32, 84, 21));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_8 = new QPushButton(groupBox_middle);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(400, 32, 84, 21));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_5 = new QPushButton(groupBox_middle);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(107, 119, 84, 21));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_6 = new QPushButton(groupBox_middle);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(400, 119, 84, 21));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_bell = new QPushButton(groupBox_middle);
        pushButton_bell->setObjectName(QStringLiteral("pushButton_bell"));
        pushButton_bell->setGeometry(QRect(490, 32, 80, 25));
        sizePolicy1.setHeightForWidth(pushButton_bell->sizePolicy().hasHeightForWidth());
        pushButton_bell->setSizePolicy(sizePolicy1);
        pushButton_middleHeater = new QPushButton(groupBox_middle);
        pushButton_middleHeater->setObjectName(QStringLiteral("pushButton_middleHeater"));
        pushButton_middleHeater->setGeometry(QRect(12, 32, 89, 25));
        sizePolicy1.setHeightForWidth(pushButton_middleHeater->sizePolicy().hasHeightForWidth());
        pushButton_middleHeater->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(groupBox_middle, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "kuchnia", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Kitchen - server 192.168.1.156", Q_NULLPTR));
        groupBox_lower->setTitle(QApplication::translate("MainWindow", "Polka dolna", Q_NULLPTR));
        pushButton_down->setText(QApplication::translate("MainWindow", "Down", Q_NULLPTR));
        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        pushButton_lowerHeater->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        groupBox_upper->setTitle(QApplication::translate("MainWindow", "Polka gorna:", Q_NULLPTR));
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
        pushButton_up->setText(QApplication::translate("MainWindow", "UP", Q_NULLPTR));
        pushButton_upperHeater->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        groupBox_middle->setTitle(QApplication::translate("MainWindow", "Polka srodkowa", Q_NULLPTR));
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_bell->setText(QApplication::translate("MainWindow", "Alarm", Q_NULLPTR));
        pushButton_middleHeater->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
