#include "keypad.h"
#include "ui_keypad.h"
#include <QDebug>

keypad::keypad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::keypad)
{
    ui->setupUi(this);

    connect(ui->pushButton_num_0,SIGNAL(clicked(bool)),this,SLOT(digitPressed()));
    connect(ui->pushButton_num_1,SIGNAL(clicked(bool)),this,SLOT(digitPressed()));
    connect(ui->pushButton_num_2,SIGNAL(clicked(bool)),this,SLOT(digitPressed()));
    connect(ui->pushButton_num_3,SIGNAL(clicked(bool)),this,SLOT(digitPressed()));
    connect(ui->pushButton_num_4,SIGNAL(clicked(bool)),this,SLOT(digitPressed()));
    connect(ui->pushButton_num_5,SIGNAL(clicked(bool)),this,SLOT(digitPressed()));
    connect(ui->pushButton_num_6,SIGNAL(clicked(bool)),this,SLOT(digitPressed()));
    connect(ui->pushButton_num_7,SIGNAL(clicked(bool)),this,SLOT(digitPressed()));
    connect(ui->pushButton_num_8,SIGNAL(clicked(bool)),this,SLOT(digitPressed()));
    connect(ui->pushButton_num_9,SIGNAL(clicked(bool)),this,SLOT(digitPressed()));
    connect(ui->pushButton_enter,SIGNAL(clicked(bool)),this,SLOT(applyNumber()));
    connect(ui->pushButton_clear,SIGNAL(clicked(bool)),this,SLOT(clearNumber()));
    connect(ui->pushButton_close,SIGNAL(clicked(bool)),this,SLOT(close())); //closing keypad widget

}

keypad::~keypad()
{
    delete ui;
}

void keypad::digitPressed(){

//return value of number assigned to button and checks if is out of bounds
   QString buttonName = ((QPushButton*) sender())->text();
   tableNumber.append(buttonName);
   if( (tableNumber.toInt() > MAX_NUMBER_OF_SEATS) || (tableNumber.size() > MAX_NUMBER_OF_DIGITS) )
   {
       tableNumber.chop(1);//remove last number
   }
   qDebug() << tableNumber;

   ui->lcdDisplay->display(tableNumber);

}

void keypad::clearNumber(){
    tableNumber.clear();
    ui->lcdDisplay->display(tableNumber);
}

void keypad::applyNumber(){
    emit SendKpadNumber(tableNumber);
    QWidget::close();
}

