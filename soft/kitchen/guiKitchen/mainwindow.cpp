#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <qmessagebox.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



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

    //create error handling for Server
    connect(&tcpServerKitchen, SIGNAL(acceptError(QAbstractSocket::SocketError)),
                    this, SLOT(serverDisplayError(QAbstractSocket::SocketError)));
    //initializing TCP server
    while (!tcpServerKitchen.isListening() && !tcpServerKitchen.listen(IP_ADDRES_SERVER, IP_PORT_NUMBER)) {
        QMessageBox::StandardButton ret = QMessageBox::critical(this,
                                        tr("Error!"),
                                        tr("Unable to start the server: %1.")
                                        .arg(tcpServerKitchen.errorString()),
                                        QMessageBox::Retry
                                        | QMessageBox::Cancel);
        if (ret == QMessageBox::Cancel)
            return;
    }
    //acceptConnection() will execute when client will connectIP_PORT_NUMBER))
    connect(&tcpServerKitchen, SIGNAL(newConnection()),this, SLOT(acceptConnection()));
}


MainWindow::~MainWindow()
{
    delete ui;
}

/******GUI******/
void MainWindow::displayKeypad(){
//recives name of the calling button
    this->buttonName = ((QPushButton*) sender())->objectName();
    qDebug() << "namesnumber" <<buttonName;
    tableNumberR.append(buttonName);
  if(tableNumberR.toInt() > MAX_NUMBER_OF_SEATS)
  {
    tableNumberR.chop(1);//remove last number
  }


    //Option dialog
       QMessageBox msgBoxK;
       //msgBoxK.setBaseSize(QSize(500,400));
       msgBoxK.setStyleSheet(
                   "QPushButton {"
                   " background-color: silver;"
                   " border-style: outset;"
                   " border-width: 2px;"
                   " border-radius: 10px;"
                   " border-color: beige;"
                   " font: bold 16px;"
                   " min-width: 10em;"
                   " max-width: 15em;"
                   " min-height: 10em;"
                   " padding: 6px;"

                   "}"


                   );
       msgBoxK.setInformativeText("<center>Do you want send plate or get returned plate?");
       QPushButton *closebutton =msgBoxK.addButton(QMessageBox::Close);
       QPushButton *returnedPlate = msgBoxK.addButton("Get Returned Plate",QMessageBox::NoRole);
       QPushButton *sendPLate = msgBoxK.addButton("Send Plate",QMessageBox::YesRole);
       msgBoxK.exec();
            if (msgBoxK.clickedButton() == returnedPlate)
            {
                 QPushButton *buttonChangedText = MainWindow::findChild<QPushButton*>(this->buttonName);
                 numberClear.clear();
                 buttonChangedText->setText(numberClear);

                //connect(this,SIGNAL(SendKpadClear(QString)),this,SLOT(receiveNameNumber(QString)));

                numberClearsend = QString("clearbutton");
                QByteArray data2send = this->buttonName.toLatin1() + "," + numberClearsend.toLatin1();
                tcpServerConnection->write(data2send);


            }
            else if (msgBoxK.clickedButton() == sendPLate)
            {
                    myKpad = new keypad(this);
                    myKpad->setModal(true);
                    myKpad->show();
                    //creates connection, which than keypad dialog utilitizes to return number
                    connect(myKpad,SIGNAL(SendKpadNumber(QString)),this,SLOT(receiveNameNumber(QString)));
            }
            else if (msgBoxK.clickedButton() == closebutton)
            {
                     msgBoxK.close();
            }
}

void MainWindow::receiveNameNumber(QString number){
    qDebug() << "nazwa slotu talerza" << this->buttonName << "number stołka" << number;
//returns pointer to button, which we then modify
    QPushButton *buttonChangedText = MainWindow::findChild<QPushButton*>(this->buttonName);
        if(tcpServerConnection->state() != QAbstractSocket::ConnectedState){
           QMessageBox::information(this,"no connection",
                                 "Open clients' app before sending data",QMessageBox::Ok);
        return;
        }

//changing displayed text
    buttonChangedText->setText(number);
//sending text to restaurant    
    QByteArray data2send = this->buttonName.toLatin1() + "," + number.toLatin1();
    tcpServerConnection->write(data2send);
}

/******Networking******/
void MainWindow::acceptConnection(){
    tcpServerConnection = tcpServerKitchen.nextPendingConnection(); //binds socket to client
    connect(tcpServerConnection, SIGNAL(readyRead()),this, SLOT(socketReciveData()));
    //create error handling for socket
    connect(tcpServerConnection, SIGNAL(error(QAbstractSocket::SocketError)),
            this, SLOT(socketDisplayError(QAbstractSocket::SocketError)));
    tcpServerKitchen.close();

}

void MainWindow::socketReciveData(){

    QString dataRead = tcpServerConnection->readAll();
    qDebug () << dataRead;
    QStringList dataReadList = dataRead.split(',');
//    if (dataReadList[1] == '\0')
//        qDebug() << "nie został wcisniety numer stolika";
//     else
//        buttonChangedTextfromR = MainWindow::findChild<QPushButton *>(dataReadList[0]);
////changing displayed text
//        buttonChangedTextfromR->setText(dataReadList[1]);

        if (dataReadList[1] == '\0')
               {
               qDebug() << "nie został wcisniety numer stolika" <<dataReadList;
               }
            else if (dataReadList[1] == "clearbutton")
               {qDebug() <<"wwww";
                buttonChangedTextfromR = MainWindow::findChild<QPushButton *>(dataReadList[0]);
                cleartext.clear();
                buttonChangedTextfromR->setText(cleartext);
               }
            else
                    {
                    buttonChangedTextfromR = MainWindow::findChild<QPushButton *>(dataReadList[0]);
        //changing displayed text
                    buttonChangedTextfromR->setText(dataReadList[1]);
                    }
}

void MainWindow::socketDisplayError(QAbstractSocket::SocketError socketError){

    tcpServerConnection->abort();

    while(!tcpServerKitchen.listen(IP_ADDRES_SERVER, IP_PORT_NUMBER)){
        qDebug() << "unable to listen for incomming connections ";
        QApplication::quit();
    }
        qDebug() << socketError;
}

void MainWindow::serverDisplayError(QAbstractSocket::SocketError serverError){
    qDebug() << "Server error: " + serverError;
    QApplication::quit();
}


void MainWindow::on_pushButton_up_clicked()
{

}
