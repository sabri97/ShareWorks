#include "user_dialog.h"
#include "ui_user_dialog.h"
#include<QDateTime>

User_Dialog::User_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User_Dialog)
{
    LogIn conn;
    ui->setupUi(this);
    QPixmap pix1("./Data/Pictures/bienvenue-icon.png");
    int w1 = ui->label_bienvenue_admin->width();
    int h1 = ui->label_bienvenue_admin->height();
    ui ->label_bienvenue_admin->setPixmap(pix1.scaled(w1,h1,Qt::KeepAspectRatio));

    QPixmap pix3("./Data/Pictures/background_2.jpg");
    int w3 = ui->label_background2->width();
    int h3 = ui->label_background2->height();
    ui ->label_background2->setPixmap(pix3.scaled(w3,h3,Qt::KeepAspectRatio));

    if(!conn.ConnOpen())
            {
               ui->label_dbState->setText("database not connected");
            }
           else
           {
               ui->label_dbState->setText("database connected");
           }

timer = new QTimer(this);
connect(timer,SIGNAL(timeout()),this,SLOT(myfunction()));
timer->start(1000);

}

User_Dialog::~User_Dialog()
{
    delete ui;
}
