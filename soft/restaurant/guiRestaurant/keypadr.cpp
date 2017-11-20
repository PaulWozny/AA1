#include "keypadr.h"
#include "ui_keypadr.h"
#include <QDebug>
keypadR::keypadR(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::keypadR)
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

keypadR::~keypadR()
{
    delete ui;
}
void keypadR::digitPressed(){
    //return value of number assigned to button and checks if is out of bounds
       QString buttonName = ((QPushButton*) sender())->text();
       tableNumberR.append(buttonName);
       if( (tableNumberR.toInt() > MAX_NUMBER_OF_SEATS) || (tableNumberR.size() > MAX_NUMBER_OF_DIGITS) )
           {
                tableNumberR.chop(1);//remove last number
           }
       ui->lcdDisplay->display(tableNumberR);
       //qDebug() << tableNumberR;
}

void keypadR::clearNumber(){
    tableNumberR.clear();
    ui->lcdDisplay->display(tableNumberR);
}

void keypadR::applyNumber(){
    emit SendKpadNumberR(tableNumberR);
    QWidget::close();
}
