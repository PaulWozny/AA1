/********************************************************************************
** Form generated from reading UI file 'keypad.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYPAD_H
#define UI_KEYPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_keypad
{
public:
    QGridLayout *gridLayout_2;
    QLCDNumber *lcdDisplay;
    QGridLayout *gridLayout;
    QPushButton *pushButton_num_2;
    QPushButton *pushButton_num_3;
    QPushButton *pushButton_num_1;
    QPushButton *pushButton_num_4;
    QPushButton *pushButton_num_9;
    QPushButton *pushButton_num_5;
    QPushButton *pushButton_num_6;
    QPushButton *pushButton_num_7;
    QPushButton *pushButton_num_8;
    QPushButton *pushButton_num_0;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_close;
    QPushButton *pushButton_enter;

    void setupUi(QDialog *keypad)
    {
        if (keypad->objectName().isEmpty())
            keypad->setObjectName(QStringLiteral("keypad"));
        keypad->resize(533, 416);
        gridLayout_2 = new QGridLayout(keypad);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lcdDisplay = new QLCDNumber(keypad);
        lcdDisplay->setObjectName(QStringLiteral("lcdDisplay"));

        gridLayout_2->addWidget(lcdDisplay, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_num_2 = new QPushButton(keypad);
        pushButton_num_2->setObjectName(QStringLiteral("pushButton_num_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_num_2->sizePolicy().hasHeightForWidth());
        pushButton_num_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_num_2, 2, 1, 1, 1);

        pushButton_num_3 = new QPushButton(keypad);
        pushButton_num_3->setObjectName(QStringLiteral("pushButton_num_3"));
        sizePolicy.setHeightForWidth(pushButton_num_3->sizePolicy().hasHeightForWidth());
        pushButton_num_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_num_3, 2, 2, 1, 1);

        pushButton_num_1 = new QPushButton(keypad);
        pushButton_num_1->setObjectName(QStringLiteral("pushButton_num_1"));
        sizePolicy.setHeightForWidth(pushButton_num_1->sizePolicy().hasHeightForWidth());
        pushButton_num_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_num_1, 2, 0, 1, 1);

        pushButton_num_4 = new QPushButton(keypad);
        pushButton_num_4->setObjectName(QStringLiteral("pushButton_num_4"));
        sizePolicy.setHeightForWidth(pushButton_num_4->sizePolicy().hasHeightForWidth());
        pushButton_num_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_num_4, 1, 0, 1, 1);

        pushButton_num_9 = new QPushButton(keypad);
        pushButton_num_9->setObjectName(QStringLiteral("pushButton_num_9"));
        sizePolicy.setHeightForWidth(pushButton_num_9->sizePolicy().hasHeightForWidth());
        pushButton_num_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_num_9, 0, 2, 1, 1);

        pushButton_num_5 = new QPushButton(keypad);
        pushButton_num_5->setObjectName(QStringLiteral("pushButton_num_5"));
        sizePolicy.setHeightForWidth(pushButton_num_5->sizePolicy().hasHeightForWidth());
        pushButton_num_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_num_5, 1, 1, 1, 1);

        pushButton_num_6 = new QPushButton(keypad);
        pushButton_num_6->setObjectName(QStringLiteral("pushButton_num_6"));
        sizePolicy.setHeightForWidth(pushButton_num_6->sizePolicy().hasHeightForWidth());
        pushButton_num_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_num_6, 1, 2, 1, 1);

        pushButton_num_7 = new QPushButton(keypad);
        pushButton_num_7->setObjectName(QStringLiteral("pushButton_num_7"));
        sizePolicy.setHeightForWidth(pushButton_num_7->sizePolicy().hasHeightForWidth());
        pushButton_num_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_num_7, 0, 0, 1, 1);

        pushButton_num_8 = new QPushButton(keypad);
        pushButton_num_8->setObjectName(QStringLiteral("pushButton_num_8"));
        sizePolicy.setHeightForWidth(pushButton_num_8->sizePolicy().hasHeightForWidth());
        pushButton_num_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_num_8, 0, 1, 1, 1);

        pushButton_num_0 = new QPushButton(keypad);
        pushButton_num_0->setObjectName(QStringLiteral("pushButton_num_0"));
        sizePolicy.setHeightForWidth(pushButton_num_0->sizePolicy().hasHeightForWidth());
        pushButton_num_0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_num_0, 3, 1, 1, 1);

        pushButton_clear = new QPushButton(keypad);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        sizePolicy.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_clear, 3, 0, 1, 1);

        pushButton_close = new QPushButton(keypad);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        sizePolicy.setHeightForWidth(pushButton_close->sizePolicy().hasHeightForWidth());
        pushButton_close->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_close, 3, 2, 1, 1);

        pushButton_enter = new QPushButton(keypad);
        pushButton_enter->setObjectName(QStringLiteral("pushButton_enter"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_enter->sizePolicy().hasHeightForWidth());
        pushButton_enter->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_enter, 0, 3, 4, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(keypad);

        QMetaObject::connectSlotsByName(keypad);
    } // setupUi

    void retranslateUi(QDialog *keypad)
    {
        keypad->setWindowTitle(QApplication::translate("keypad", "Dialog", Q_NULLPTR));
        pushButton_num_2->setText(QApplication::translate("keypad", "2", Q_NULLPTR));
        pushButton_num_3->setText(QApplication::translate("keypad", "3", Q_NULLPTR));
        pushButton_num_1->setText(QApplication::translate("keypad", "1", Q_NULLPTR));
        pushButton_num_4->setText(QApplication::translate("keypad", "4", Q_NULLPTR));
        pushButton_num_9->setText(QApplication::translate("keypad", "9", Q_NULLPTR));
        pushButton_num_5->setText(QApplication::translate("keypad", "5", Q_NULLPTR));
        pushButton_num_6->setText(QApplication::translate("keypad", "6", Q_NULLPTR));
        pushButton_num_7->setText(QApplication::translate("keypad", "7", Q_NULLPTR));
        pushButton_num_8->setText(QApplication::translate("keypad", "8", Q_NULLPTR));
        pushButton_num_0->setText(QApplication::translate("keypad", "0", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("keypad", "C", Q_NULLPTR));
        pushButton_close->setText(QApplication::translate("keypad", "close", Q_NULLPTR));
        pushButton_enter->setText(QApplication::translate("keypad", "enter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class keypad: public Ui_keypad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYPAD_H
