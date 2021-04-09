#include "user_dialog.h"
#include "ui_user_dialog.h"
#include<QDateTime>


extern QString txt_time;
extern QString txt_date;

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

void User_Dialog::on_load_clicked()
{
    LogIn conn;

    if(!conn.ConnOpen())
    {qDebug()<<("Failed to open database"); return;}

    QSqlQueryModel * modale = new QSqlQueryModel();
        //ConnOpen();
        QSqlQuery * qry = new QSqlQuery(conn.DataBase);

        qry->prepare("select * from Vol");

        qry->exec();
        modale->setQuery(*qry);
        ui->tableView->setModel(modale);
        conn.ConnClose();

        qDebug()<< (modale->rowCount());
}

void User_Dialog::on_advancedSearch_clicked()
{
    /*userAdvSearch = new user_advanced_search(this);
    userAdvSearch->show();*/
}


void User_Dialog::on_Valid_clicked()
{
    LogIn conn;
    //QString datedeap = ui->datedep->text();
    //QString datearr = ui->datearr->text();
    QString aerodep = ui->aerodep->text();
    QString aeroarr = ui->aeroarr->text();
    QString datedeap = ui->datedepEdit->text();
    QString datearr = ui->datearrEdit->text();


    if(!conn.ConnOpen())
    {qDebug()<<("Failed to open database"); return;}

    QSqlQueryModel * modale = new QSqlQueryModel();
        //ConnOpen();
        QSqlQuery * qry = new QSqlQuery(conn.DataBase);
        qry->prepare("select * from Vol where dateDepart='"+datedeap+"' and dateArrivee='"+datearr+"' and aeroportDepart='"+aerodep+"' and aeroportArrivee='"+aeroarr+"'");

        qry->exec();
        modale->setQuery(*qry);
        ui->tableView->setModel(modale);
        conn.ConnClose();

        qDebug()<< (modale->rowCount());
}



void User_Dialog::on_save_clicked()
{
    LogIn conn;
    QString idVoyageur = ui->txt_idVoyageur->text();
    QString nom = ui->txt_nom->text();
    QString prenom = ui->txt_prenom->text();
    QString nationalite = ui->txt_nationalite->text();
    QString telephone = ui->txt_telephone->text();
    QString mail = ui->txt_mail->text();
    QString numPassport = ui->txt_numPassport->text();
    QString dateReservation = txt_date;
    QString heureReservation = txt_time;
    QString idVol = ui->txt_idVol->text();



    if(!conn.ConnOpen()){qDebug()<<("Failed to open database"); return;}

    //ConnOpen();
    QSqlQuery qry;


    qry.prepare("insert into Voyageur (nom,prenom,nationalite,telephone,mail,numPassport,dateReservation,heureReservation,idVol) values('"+nom+"','"+prenom+"','"+nationalite+"','"+telephone+"','"+mail+"','"+numPassport+"','"+dateReservation+"','"+heureReservation+"','"+idVol+"')");

    if(qry.exec())
    {
        QMessageBox :: critical(this, tr("Save"),tr("Saved"));
        conn.ConnClose();
    }
    else
    {
        QMessageBox :: critical(this, tr("Error"),qry.lastError().text());
    }
}


