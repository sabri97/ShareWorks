#ifndef GESTIONVOYAGEUR_DIALOG_H
#define GESTIONVOYAGEUR_DIALOG_H

#include "login.h"
#include <QDialog>
#include <QMessageBox>

namespace Ui {
class GestionVoyageur_Dialog;
}

class GestionVoyageur_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit GestionVoyageur_Dialog(QWidget *parent = 0);
    ~GestionVoyageur_Dialog();

private slots:
    void on_delete_2_clicked();

    void on_save_clicked();

    void on_load_clicked();

    void on_update_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::GestionVoyageur_Dialog *ui;
};

#endif // GESTIONVOYAGEUR_DIALOG_H
