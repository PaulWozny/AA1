#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <constants.h>
#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include "keypad.h"
//#include <QtSvg>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
    void SendKpadClear(QString clearnum);
public slots:
    void receiveNameNumber(QString number);
    void acceptConnection();
    void socketReciveData();
    void displayKeypad();

    void socketDisplayError(QAbstractSocket::SocketError socketError);
    void serverDisplayError(QAbstractSocket::SocketError serverError);
private slots:
    void on_pushButton_up_clicked();

private:
    Ui::MainWindow *ui;
    keypad *myKpad;
    //Name of the button pressed atm
    QString buttonName;
    QString tableNumberR;
    QString numberClear;
    QString numberClearsend;
    QString cleartext;

    QTcpServer tcpServerKitchen;
    QTcpSocket *tcpServerConnection;

   QPushButton *buttonChangedTextfromR;
};



#endif // MAINWINDOW_H
