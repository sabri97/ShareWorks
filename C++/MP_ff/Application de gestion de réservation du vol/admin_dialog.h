#ifndef ADMIN_DIALOG_H
#define ADMIN_DIALOG_H

#include <QDialog>

#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QTimer>
#include <QDate>
#include "login.h"
#include "gestionvol_dialog.h"
#include "gestionvoyageur_dialog.h"

namespace Ui {
class Admin_Dialog;
}

class Admin_Dialog : public QDialog
{
    Q_OBJECT

public slots:
        void myfunction();

public:
    explicit Admin_Dialog(QWidget *parent = 0);
    ~Admin_Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

  //  void on_pushButton_3_clicked();

    //void on_save_clicked();

   // void on_update_clicked();

   // void on_delete_2_clicked();

    //void on_load_clicked();

   // void on_tableView_activated(const QModelIndex &index);

    void on_gestionVol_clicked();

    void on_gestionVoyageur_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_tabWidget_tabBarClicked(int index);

private:
    Ui::Admin_Dialog *ui;
    GestionVol_Dialog *gestionVol_Dialog;
    GestionVoyageur_Dialog *gestionVoyageur_Dialog;
    QTimer *timer;
    QDate *date;

};

#endif // ADMIN_DIALOG_H
