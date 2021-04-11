#ifndef GESTIONVOL_DIALOG_H
#define GESTIONVOL_DIALOG_H

#include "login.h"
#include <QDialog>
#include <QMessageBox>


namespace Ui {
class GestionVol_Dialog;
}

class GestionVol_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit GestionVol_Dialog(QWidget *parent = 0);
    ~GestionVol_Dialog();

private slots:
    void on_delete_2_clicked();

    void on_save_clicked();

    void on_load_clicked();

    void on_update_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::GestionVol_Dialog *ui;
};

#endif // GESTIONVOL_DIALOG_H
