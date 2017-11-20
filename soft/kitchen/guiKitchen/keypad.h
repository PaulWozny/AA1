#ifndef KEYPAD_H
#define KEYPAD_H

#include <QDialog>
#include <constants.h>



namespace Ui {
class keypad;
}

class keypad : public QDialog
{
    Q_OBJECT

public:
    explicit keypad(QWidget *parent = 0);
    ~keypad();

signals:
    void SendKpadNumber(QString number);

private slots:
    void digitPressed();
    void clearNumber();
    void applyNumber();


private:
    Ui::keypad *ui;

    QString tableNumber;

};

#endif // KEYPAD_H
