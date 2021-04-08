#include "gestionvol_dialog.h"
#include "ui_gestionvol_dialog.h"
#include <QMessageBox>


GestionVol_Dialog::GestionVol_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GestionVol_Dialog)
{
    ui->setupUi(this);
}

GestionVol_Dialog::~GestionVol_Dialog()
{
    delete ui;
}

//*************************** SAVE ***************************

void GestionVol_Dialog::on_save_clicked()
{
    LogIn conn;
    QString idVol = ui->txt_idVol->text();
    QString numVol = ui->txt_numVol->text();
    QString numAvion = ui->txt_numAvion->text();
    QString dateDepart = ui->txt_dateDepart->text();
    QString heureDepart = ui->txt_heureDepart->text();
    QString dateArrivee = ui->txt_dateArrivee->text();
    QString heureArrivee = ui->txt_heureArrivee->text();
    QString aeroportDepart = ui->txt_aeroportDepart->text();
    QString aeroportArrivee = ui->txt_aeroportArrivee->text();
    QString nombrePlace = ui->txt_nombrePlace->text();

    if(!conn.ConnOpen()){qDebug()<<("Failed to open database"); return;}

    //ConnOpen();
    QSqlQuery qry;

    qry.prepare("insert into Vol (numVol,numAvion,dateDepart,heureDepart,dateArrivee,heureArrivee,aeroportDepart,aeroportArrivee,nombrePlace) values('"+numVol+"','"+numAvion+"','"+dateDepart+"','"+heureDepart+"','"+dateArrivee+"','"+heureArrivee+"','"+aeroportDepart+"','"+aeroportArrivee+"','"+nombrePlace+"')");

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

//*************************** UPDATE ***************************
void GestionVol_Dialog::on_update_clicked()
{
    LogIn conn;
    QString idVol = ui->txt_idVol->text();
    QString numVol = ui->txt_numVol->text();
    QString numAvion = ui->txt_numAvion->text();
    QString dateDepart = ui->txt_dateDepart->text();
    QString heureDepart = ui->txt_heureDepart->text();
    QString dateArrivee = ui->txt_dateArrivee->text();
    QString heureArrivee = ui->txt_heureArrivee->text();
    QString aeroportDepart = ui->txt_aeroportDepart->text();
    QString aeroportArrivee = ui->txt_aeroportArrivee->text();
    QString nombrePlace = ui->txt_nombrePlace->text();

    if(!conn.ConnOpen()){qDebug()<<("Failed to open database"); return;}

    //ConnOpen();
    QSqlQuery qry;

    qry.prepare("update Vol set numVol='"+numVol+"',numAvion='"+numAvion+"',dateDepart='"+dateDepart+"',heureDepart='"+heureDepart+"',dateArrivee='"+dateArrivee+"',heureArrivee='"+heureArrivee+"',aeroportDepart='"+aeroportDepart+"',aeroportArrivee='"+aeroportArrivee+"',nombrePlace='"+nombrePlace+"' where idVol='"+idVol+"'");

    if(qry.exec())
    {
        QMessageBox :: critical(this, tr("Edit"),tr("Updated"));
        conn.ConnClose();
    }
    else
    {
        QMessageBox :: critical(this, tr("Error"),qry.lastError().text());
    }
}
//*************************** DELETE ***************************
void GestionVol_Dialog::on_delete_2_clicked()
{
    LogIn conn;
    QString idVol = ui->txt_idVol->text();

    if(!conn.ConnOpen()){qDebug()<<("Failed to open database"); return;}

    //ConnOpen();
    QSqlQuery qry;

    qry.prepare("delete from Vol where idVol='"+idVol+"'");

    if(qry.exec())
    {
        QMessageBox :: critical(this, tr("Delete"),tr("Deleted"));
        conn.ConnClose();
    }
    else
    {
        QMessageBox :: critical(this, tr("Error"),qry.lastError().text());
    }
}

//*************************** LOAD ***************************
void GestionVol_Dialog::on_load_clicked()
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

void GestionVol_Dialog::on_tableView_activated(const QModelIndex &index)
{
    LogIn conn;
    QString val = ui->tableView->model()->data(index).toString();

       if(!conn.ConnOpen())
       {qDebug()<<("Failed to open database"); return;}

       //ConnOpen();
       QSqlQuery qry;
       qry.prepare("select * from Vol where idVol='"+val+"'");

       if(qry.exec())
       {
           while(qry.next())
           {
             ui->txt_idVol->setText(qry.value(0).toString());
             ui->txt_numVol->setText(qry.value(1).toString());
             ui->txt_numAvion->setText(qry.value(2).toString());
             ui->txt_dateDepart->setText(qry.value(3).toString());
             ui->txt_heureDepart->setText(qry.value(4).toString());
             ui->txt_dateArrivee->setText(qry.value(5).toString());
             ui->txt_heureArrivee->setText(qry.value(6).toString());
             ui->txt_aeroportDepart->setText(qry.value(7).toString());
             ui->txt_aeroportArrivee->setText(qry.value(8).toString());
             ui->txt_nombrePlace->setText(qry.value(9).toString());
           }
          conn.ConnClose();

       }
       else
       {
           QMessageBox :: critical(this, tr("Error"),qry.lastError().text());
       }
}




