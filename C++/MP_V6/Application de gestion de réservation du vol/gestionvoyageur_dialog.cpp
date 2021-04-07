#include "gestionvoyageur_dialog.h"
#include "ui_gestionvoyageur_dialog.h"

GestionVoyageur_Dialog::GestionVoyageur_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GestionVoyageur_Dialog)
{
    ui->setupUi(this);
}

GestionVoyageur_Dialog::~GestionVoyageur_Dialog()
{
    delete ui;
}

void GestionVoyageur_Dialog::on_delete_2_clicked()
{
    LogIn conn;
    QString idVoyageur = ui->txt_idVoyageur->text();

    if(!conn.ConnOpen()){qDebug()<<("Failed to open database"); return;}

    //ConnOpen();
    QSqlQuery qry;

    qry.prepare("delete from Voyageur where idVoyageur='"+idVoyageur+"'");

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

void GestionVoyageur_Dialog::on_save_clicked()
{
    LogIn conn;
    QString idVoyageur = ui->txt_idVoyageur->text();
    QString nom = ui->txt_nom->text();
    QString prenom = ui->txt_prenom->text();
    QString nationalite = ui->txt_nationalite->text();
    QString telephone = ui->txt_telephone->text();
    QString mail = ui->txt_mail->text();
    QString numPassport = ui->txt_numPassport->text();
    QString dateReservation = ui->txt_dateReservation->text();
    QString heureReservation = ui->txt_heureReservation->text();
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

void GestionVoyageur_Dialog::on_load_clicked()
{
    LogIn conn;
    if(!conn.ConnOpen())
    {qDebug()<<("Failed to open database"); return;}

    QSqlQueryModel * modale = new QSqlQueryModel();
        //ConnOpen();
        QSqlQuery * qry = new QSqlQuery(conn.DataBase);
        qry->prepare("select * from Voyageur");

        qry->exec();
        modale->setQuery(*qry);
        ui->tableView->setModel(modale);
        conn.ConnClose();

        qDebug()<< (modale->rowCount());
}

void GestionVoyageur_Dialog::on_update_clicked()
{
    LogIn conn;
    QString idVoyageur = ui->txt_idVoyageur->text();
    QString nom = ui->txt_nom->text();
    QString prenom = ui->txt_prenom->text();
    QString nationalite = ui->txt_nationalite->text();
    QString telephone = ui->txt_telephone->text();
    QString mail = ui->txt_mail->text();
    QString numPassport = ui->txt_numPassport->text();
    QString dateReservation = ui->txt_dateReservation->text();
    QString heureReservation = ui->txt_heureReservation->text();
    QString idVol = ui->txt_idVol->text();

    if(!conn.ConnOpen()){qDebug()<<("Failed to open database"); return;}

    //ConnOpen();
    QSqlQuery qry;

    qry.prepare("update Voyageur set nom='"+nom+"',prenom='"+prenom+"',nationalite='"+nationalite+"',telephone='"+telephone+"',mail='"+mail+"',numPassport='"+numPassport+"',dateReservation='"+dateReservation+"',heureReservation='"+heureReservation+"',idVol='"+idVol+"' where idVoyageur='"+idVoyageur+"'");

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

void GestionVoyageur_Dialog::on_tableView_activated(const QModelIndex &index)
{
    LogIn conn;
    QString val = ui->tableView->model()->data(index).toString();

       if(!conn.ConnOpen())
       {qDebug()<<("Failed to open database"); return;}

       //ConnOpen();
       QSqlQuery qry;
       qry.prepare("select * from Voyageur where idVoyageur='"+val+"'");

       if(qry.exec())
       {
           while(qry.next())
           {
             ui->txt_idVoyageur->setText(qry.value(0).toString());
             ui->txt_nom->setText(qry.value(1).toString());
             ui->txt_prenom->setText(qry.value(2).toString());
             ui->txt_nationalite->setText(qry.value(3).toString());
             ui->txt_telephone->setText(qry.value(4).toString());
             ui->txt_mail->setText(qry.value(5).toString());
             ui->txt_numPassport->setText(qry.value(6).toString());
             ui->txt_dateReservation->setText(qry.value(7).toString());
             ui->txt_heureReservation->setText(qry.value(8).toString());
             ui->txt_idVol->setText(qry.value(9).toString());
           }
          conn.ConnClose();

       }
       else
       {
           QMessageBox :: critical(this, tr("Error"),qry.lastError().text());
       }
}
