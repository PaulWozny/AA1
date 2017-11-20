#ifndef KEYPADR_H
#define KEYPADR_H

#include <QDialog>
#include <constants.h>

namespace Ui {
class keypadR;
}

class keypadR : public QDialog
{
    Q_OBJECT

public:
    explicit keypadR(QWidget *parent = 0);
    ~keypadR();

signals:
    void SendKpadNumberR(QString number);

private slots:
    void digitPressed();
    void clearNumber();
    void applyNumber();

private:
    Ui::keypadR *ui;
    QString tableNumberR;
};

#endif // KEYPADR_H
