#ifndef USER_DIALOG_H
#define USER_DIALOG_H

#include <QDialog>
#include "login.h"

namespace Ui {
class User_Dialog;
}

class User_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit User_Dialog(QWidget *parent = 0);
    ~User_Dialog();

private:
    Ui::User_Dialog *ui;
    QTimer *timer;
    QDate *date;
};

#endif // USER_DIALOG_H
