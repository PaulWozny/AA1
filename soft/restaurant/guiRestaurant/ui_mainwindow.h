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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_upper;
    QGridLayout *gridLayout;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QPushButton *pushButton_9;
    QPushButton *pushButton_upperHeater;
    QPushButton *pushButton_up;
    QGroupBox *groupBox_middle;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_middleHeater;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_bell;
    QGroupBox *groupBox_lower;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_lowerHeater;
    QPushButton *pushButton_down;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(810, 650);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_upper = new QGroupBox(centralWidget);
        groupBox_upper->setObjectName(QStringLiteral("groupBox_upper"));
        gridLayout = new QGridLayout(groupBox_upper);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_11 = new QPushButton(groupBox_upper);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_11, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(groupBox_upper);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_10, 1, 1, 1, 1);

        pushButton_12 = new QPushButton(groupBox_upper);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_12, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(groupBox_upper);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_9, 1, 0, 1, 1);

        pushButton_upperHeater = new QPushButton(groupBox_upper);
        pushButton_upperHeater->setObjectName(QStringLiteral("pushButton_upperHeater"));
        sizePolicy.setHeightForWidth(pushButton_upperHeater->sizePolicy().hasHeightForWidth());
        pushButton_upperHeater->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_upperHeater, 0, 2, 2, 1);


        gridLayout_4->addWidget(groupBox_upper, 0, 0, 1, 1);

        pushButton_up = new QPushButton(centralWidget);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        sizePolicy.setHeightForWidth(pushButton_up->sizePolicy().hasHeightForWidth());
        pushButton_up->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_up, 0, 1, 1, 1);

        groupBox_middle = new QGroupBox(centralWidget);
        groupBox_middle->setObjectName(QStringLiteral("groupBox_middle"));
        gridLayout_2 = new QGridLayout(groupBox_middle);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_middleHeater = new QPushButton(groupBox_middle);
        pushButton_middleHeater->setObjectName(QStringLiteral("pushButton_middleHeater"));
        sizePolicy.setHeightForWidth(pushButton_middleHeater->sizePolicy().hasHeightForWidth());
        pushButton_middleHeater->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_middleHeater, 0, 2, 2, 1);

        pushButton_7 = new QPushButton(groupBox_middle);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(groupBox_middle);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_8, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(groupBox_middle);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_5, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(groupBox_middle);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_6, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_middle, 1, 0, 1, 1);

        pushButton_bell = new QPushButton(centralWidget);
        pushButton_bell->setObjectName(QStringLiteral("pushButton_bell"));
        sizePolicy.setHeightForWidth(pushButton_bell->sizePolicy().hasHeightForWidth());
        pushButton_bell->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_bell, 1, 1, 1, 1);

        groupBox_lower = new QGroupBox(centralWidget);
        groupBox_lower->setObjectName(QStringLiteral("groupBox_lower"));
        gridLayout_3 = new QGridLayout(groupBox_lower);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_4 = new QPushButton(groupBox_lower);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox_lower);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton_1 = new QPushButton(groupBox_lower);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton_1, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox_lower);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_lowerHeater = new QPushButton(groupBox_lower);
        pushButton_lowerHeater->setObjectName(QStringLiteral("pushButton_lowerHeater"));
        sizePolicy.setHeightForWidth(pushButton_lowerHeater->sizePolicy().hasHeightForWidth());
        pushButton_lowerHeater->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton_lowerHeater, 0, 2, 2, 1);


        gridLayout_4->addWidget(groupBox_lower, 2, 0, 1, 1);

        pushButton_down = new QPushButton(centralWidget);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        sizePolicy.setHeightForWidth(pushButton_down->sizePolicy().hasHeightForWidth());
        pushButton_down->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_down, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "restauracja", Q_NULLPTR));
        groupBox_upper->setTitle(QApplication::translate("MainWindow", "Polka gorna:", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_upperHeater->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_up->setText(QApplication::translate("MainWindow", "nacisnij mnie", Q_NULLPTR));
        groupBox_middle->setTitle(QApplication::translate("MainWindow", "Polka srodkowa", Q_NULLPTR));
        pushButton_middleHeater->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_bell->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        groupBox_lower->setTitle(QApplication::translate("MainWindow", "Polka dolna", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_lowerHeater->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_down->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
