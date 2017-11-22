#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtNetwork>
#include <constants.h>
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//buttons style



    
    //connecting buttons coresponding to the plates
    connect(ui->pushButton_1, SIGNAL(clicked(bool)),this, SLOT(displayKeypad()));
    connect(ui->pushButton_2, SIGNAL(clicked(bool)),this, SLOT(displayKeypad()));
    connect(ui->pushButton_3, SIGNAL(clicked(bool)),this, SLOT(displayKeypad()));
    connect(ui->pushButton_4, SIGNAL(clicked(bool)),this, SLOT(displayKeypad()));
    connect(ui->pushButton_5, SIGNAL(clicked(bool)),this, SLOT(displayKeypad()));
    connect(ui->pushButton_6, SIGNAL(clicked(bool)),this, SLOT(displayKeypad()));
    connect(ui->pushButton_7, SIGNAL(clicked(bool)),this, SLOT(displayKeypad()));
    connect(ui->pushButton_8, SIGNAL(clicked(bool)),this, SLOT(displayKeypad()));
    connect(ui->pushButton_9, SIGNAL(clicked(bool)),this, SLOT(displayKeypad()));
    connect(ui->pushButton_10, SIGNAL(clicked(bool)),this, SLOT(displayKeypad()));
    connect(ui->pushButton_11, SIGNAL(clicked(bool)),this, SLOT(displayKeypad()));
    connect(ui->pushButton_12, SIGNAL(clicked(bool)),this, SLOT(displayKeypad()));

    //establishing connection to server
    tcpClientRestaurant.connectToHost(IP_ADDRES_SERVER, IP_PORT_NUMBER);
    //creating error handler
    connect(&tcpClientRestaurant, SIGNAL(error(QAbstractSocket::SocketError)),
            this, SLOT(socketDisplayError(QAbstractSocket::SocketError)));
    connect(&tcpClientRestaurant, SIGNAL(disconnected()), SLOT(ReconnectToHost()));
    connect(&tcpClientRestaurant,SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this,SLOT(showSocketState(QAbstractSocket::SocketState)));

    connect(&tcpClientRestaurant, SIGNAL(connected()),
            this, SLOT(startTransfer()));

    connect(&tcpClientRestaurant, SIGNAL(readyRead()),
            this, SLOT(clientDataRecived()));
    //qDebug() << "TCP server port:" << tcpServer.serverPort();



}

MainWindow::~MainWindow()
{
    delete ui;
}

/******GUI******/
void MainWindow::displayKeypad()
{
//recives name of the calling button
this->buttonName = ((QPushButton*) sender())->objectName();
      tableNumberR.append(buttonName);
    if(tableNumberR.toInt() > MAX_NUMBER_OF_SEATS)
    {
      tableNumberR.chop(1);//remove last number
    }
//Option dialog
   QMessageBox msgBox;
   msgBox.setInformativeText("Do you want get plate or Return plate?");
   QPushButton *closebutton =msgBox.addButton(QMessageBox::Close);
   QPushButton *returnPlate = msgBox.addButton("Return Plate",QMessageBox::NoRole);
   QPushButton *getPLate = msgBox.addButton("Get Plate",QMessageBox::YesRole);
   msgBox.exec();
        if (msgBox.clickedButton() == getPLate)
        {
            //tableNumberR.clear();
           // QPushButton *buttonChangedText = MainWindow::findChild<QPushButton *>(this->buttonName);
            //buttonChangedText->setText(tableNumberR);
            //connect(this,SIGNAL(SendKpadClear(QString)),this,SLOT(startTransfer(QString)));
           // emit SendKpadClear(tableNumberR);

            QPushButton *buttonChangedTextfromK = MainWindow::findChild<QPushButton*>(this->buttonName);
            numberClearR.clear();
            buttonChangedTextfromK->setText(numberClearR);

           //connect(this,SIGNAL(SendKpadClear(QString)),this,SLOT(receiveNameNumber(QString)));

           numberClearsendR = QString("clearbutton");
           QByteArray data2sendR = this->buttonName.toLatin1() + "," + numberClearsendR.toLatin1();
           //tcpServerConnection->write(data2send);
           tcpClientRestaurant.write(data2sendR);

        }
        else if (msgBox.clickedButton() == returnPlate)
        {
                myKpad = new keypadR(this);
                myKpad->setModal(true);
                myKpad->show();
                //creates connection, which than keypad dialog utilitizes to return number
                connect(myKpad,SIGNAL(SendKpadNumberR(QString)),this,SLOT(startTransfer(QString)));
        }
        else if (msgBox.clickedButton() == closebutton)
        {
                 msgBox.close();
        }
}

void MainWindow::startTransfer(QString numberR){
   // tcpClientRestaurant.write("Wiadomosc z klienta - połaczony z serwerem.");
     QPushButton *buttonChangedText = MainWindow::findChild<QPushButton *>(this->buttonName);
//changing displayed text on restaurant display
     buttonChangedText->setText(numberR);
//sends data
   QByteArray data2sendR = this->buttonName.toLatin1() + "," + numberR.toLatin1();
    tcpClientRestaurant.write(data2sendR);
}

void MainWindow::clientDataRecived(){
    QString dataRead = tcpClientRestaurant.readAll();
    qDebug() <<"ddd" <<dataRead;
    QStringList dataReadList = dataRead.split(',');

    if (dataReadList[1] == '\0')
       {
       qDebug() << "nie został wcisniety numer stolika" <<dataReadList;
       }
    else if (dataReadList[1] == "clearbutton")
       {qDebug() <<"wwww";
        buttonChangedTextfromK = MainWindow::findChild<QPushButton *>(dataReadList[0]);
        cleartext.clear();
        buttonChangedTextfromK->setText(cleartext);
       }
    else
            {
            buttonChangedTextfromK = MainWindow::findChild<QPushButton *>(dataReadList[0]);
//changing displayed text
            buttonChangedTextfromK->setText(dataReadList[1]);
            }
}

void MainWindow::socketDisplayError(QAbstractSocket::SocketError error) {
    qDebug() << error;
    if(error == QAbstractSocket::ConnectionRefusedError){
        QMessageBox::information(this,"connection error",
                                 "error etablishing connection. press ok to try again",QMessageBox::Ok);
        tcpClientRestaurant.connectToHost(IP_ADDRES_SERVER, IP_PORT_NUMBER);
    }
}

void MainWindow::ReconnectToHost(){
    tcpClientRestaurant.waitForDisconnected();
    QMessageBox::information(this,"connection lost",
                             "error etablishing connection. press ok to try again",QMessageBox::Ok);
    tcpClientRestaurant.connectToHost(IP_ADDRES_SERVER, IP_PORT_NUMBER);
}

void MainWindow::showSocketState(QAbstractSocket::SocketState socketState){
    qDebug() << "current socket state: " << socketState;
}



