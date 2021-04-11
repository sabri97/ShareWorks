#ifndef USER_DIALOG_H
#define USER_DIALOG_H

#include <QDialog>
#include "login.h"
#include <QMessageBox>


namespace Ui {
class User_Dialog;
}

class User_Dialog : public QDialog
{
    Q_OBJECT
public slots:
        void myfunction();
public:
    explicit User_Dialog(QWidget *parent = 0);
    ~User_Dialog();

private slots:

    void on_load_clicked();

    void on_advancedSearch_clicked();

    void on_Valid_clicked();

    void on_save_clicked();



private:
    Ui::User_Dialog *ui;
    QTimer *timer;
    QDate *date;


};

#endif // USER_DIALOG_H
