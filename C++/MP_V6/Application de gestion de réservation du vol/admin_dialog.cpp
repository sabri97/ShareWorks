#include "admin_dialog.h"
#include "ui_admin_dialog.h"
#include <QPixmap>
#include <QFile>
#include<QTextStream>
#include <QMessageBox>
#include<QFileDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include<QDateTime>


QString file_name ="./Data/TXT files/myfile.txt";
Admin_Dialog::Admin_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin_Dialog)
{
    ui->setupUi(this);
    LogIn conn;
            QPixmap pix1("./Data/Pictures/bienvenue-icon.png");
            int w1 = ui->label_bienvenue_admin->width();
            int h1 = ui->label_bienvenue_admin->height();
            ui ->label_bienvenue_admin->setPixmap(pix1.scaled(w1,h1,Qt::KeepAspectRatio));

            QPixmap pix2("./Data/Pictures/login.png");
            int w2 = ui->label_login->width();
            int h2 = ui->label_login->height();
            ui ->label_login->setPixmap(pix2.scaled(w2,h2,Qt::KeepAspectRatio));

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

Admin_Dialog::~Admin_Dialog()
{
    delete ui;
}

void Admin_Dialog::on_pushButton_clicked()
{
    QFile file(file_name);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"title","file not open");
    }
        QTextStream out(&file);
        QString text = ui->plainTextEdit->toPlainText();
        out << text;
        file.flush();
        file.close();
}

void Admin_Dialog::on_pushButton_2_clicked()
{
    QString filter = "Text File(*.txt)";
    file_name = QFileDialog::getOpenFileName(this,"open a file","./Data/TXT files",filter);
    QFile file(file_name);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"title","file not open");
    }
        QTextStream in(&file);
        QString text = in.readAll();
        ui->plainTextEdit->setPlainText(text);
        file.close();
}

void Admin_Dialog::myfunction()
{
    QTime time = QTime::currentTime();
    QDate date = QDate::currentDate();

    QString txt_time = time.toString("hh : mm : ss");
    if(time.second() % 2 == 0)
    {
        txt_time[3] = ' ';
        txt_time[8] = ' ';
    }
    ui->label_time->setText(txt_time);

    QString txt_date = date.toString();
    ui->label_date->setText(txt_date);

}

void Admin_Dialog::on_gestionVol_clicked()
{
    gestionVol_Dialog = new GestionVol_Dialog(this);
    gestionVol_Dialog ->show();
}

void Admin_Dialog::on_gestionVoyageur_clicked()
{
    gestionVoyageur_Dialog = new GestionVoyageur_Dialog(this);
    gestionVoyageur_Dialog ->show();
}
