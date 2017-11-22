#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QStringList>
#include "keypadr.h"
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
    void SendKpadClear(QString clearR);
public slots:
    void startTransfer(QString numberR);
    void clientDataRecived();
    void socketDisplayError(QAbstractSocket::SocketError error);
    void ReconnectToHost();
    void showSocketState(QAbstractSocket::SocketState socketState);
    void displayKeypad();
private:
    Ui::MainWindow *ui;
    QTcpSocket tcpClientRestaurant;
    QTcpSocket *tcpClientConnection;
    QString cleartext;
    QString numberClearR;
    QString numberClearsendR;

    keypadR *myKpad;
    QString buttonName;
    QString tableNumberR;
   QPushButton *buttonChangedTextfromK;
   //QString buttonChangedText;

};

#endif // MAINWINDOW_H
