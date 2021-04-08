#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <Qfile>
#include <user.h>
#include <QVector>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  QPixmap pix1("./Data/Pictures/login-icon.png");
  int w1 = ui->label_pic->width();
  int h1 = ui->label_pic->height();
  ui ->label_pic->setPixmap(pix1.scaled(w1, h1, Qt::KeepAspectRatio));

  QPixmap pix2("./Data/Pictures/background.jpg");
  int w2 = ui->label_background->width();
  int h2 = ui->label_background->height();
  ui ->label_background->setPixmap(pix2.scaled(w2, h2, Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{

  QFile file("./Data/TXT files/MP.txt");
  if (!file.open(QFile::ReadOnly | QFile::Text))
  {
    QMessageBox::warning(this, "title", "problem loading text file");
  }
  else
  {
    QTextStream stream(&file);
    QString line;
    while (!stream.atEnd())
    {
      line = stream.readLine();
      QRegExp rx ("\\ | \\t");
      QStringList list = line.split(rx);
      user user;
      user.set_username(list.at(0));
      user.set_password(list.at(1));
      user.set_role(list.at(2));
      liste_user.push_back(user);
    }

    QString UserName = ui->lineEdit_username->text();
    QString Password = ui->lineEdit_password->text();
    QString Role = "";

    //---------------------------------- container ------------------------------------

    if (ui->radioButton->isChecked())   Role = "admin";
    else    Role = "user";

    user u;
    u.set_username(UserName);
    u.set_password(Password);
    u.set_role(Role);

    bool trouve = false;

    if (liste_user.contains(u))
    {
      trouve = true;
      if (Role == "admin")
      {
        QMessageBox::information(this, "LOGIN", "Username and pasword is correct, welcome admin");
        hide();
        admin_Dialog = new Admin_Dialog(this);
        admin_Dialog->show();
      }
      else
      {
        QMessageBox::information(this, "LOGIN", "Username and pasword is correct, welcome user");
        hide();
        user_Dialog = new User_Dialog(this);
        user_Dialog->show();
      }
    }
    if (trouve == false)
    {
      QMessageBox::warning(this, "LOGIN", "donnée incorrecte");
    }

    file.close();
  }
}

