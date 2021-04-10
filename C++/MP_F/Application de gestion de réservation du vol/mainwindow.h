#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "admin_dialog.h"
#include "user_dialog.h"

#include "user.h"
#include <QVector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     QVector<user> liste_user;

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::MainWindow *ui;
    Admin_Dialog *admin_Dialog;
    User_Dialog *user_Dialog;

};

#endif // MAINWINDOW_H
