/********************************************************************************
** Form generated from reading UI file 'gestionvol_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONVOL_DIALOG_H
#define UI_GESTIONVOL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestionVol_Dialog
{
public:
    QTableView *tableView;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *delete_2;
    QPushButton *save;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *load;
    QPushButton *update;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *txt_idVol;
    QLineEdit *txt_numVol;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *txt_dateDepart;
    QLineEdit *txt_heureDepart;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *txt_dateArrivee;
    QLineEdit *txt_heureArrivee;
    QLineEdit *txt_aeroportDepart;
    QLineEdit *txt_aeroportArrivee;
    QLineEdit *txt_numAvion;
    QLineEdit *txt_nombrePlace;

    void setupUi(QDialog *GestionVol_Dialog)
    {
        if (GestionVol_Dialog->objectName().isEmpty())
            GestionVol_Dialog->setObjectName(QStringLiteral("GestionVol_Dialog"));
        GestionVol_Dialog->resize(707, 497);
        tableView = new QTableView(GestionVol_Dialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 270, 671, 151));
        layoutWidget_2 = new QWidget(GestionVol_Dialog);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(460, 100, 231, 131));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        delete_2 = new QPushButton(layoutWidget_2);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(10);
        delete_2->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("Data/Pictures/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_2->setIcon(icon);
        delete_2->setIconSize(QSize(45, 45));

        horizontalLayout_5->addWidget(delete_2);

        save = new QPushButton(layoutWidget_2);
        save->setObjectName(QStringLiteral("save"));
        save->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral("Data/Pictures/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon1);
        save->setIconSize(QSize(45, 45));

        horizontalLayout_5->addWidget(save);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        load = new QPushButton(layoutWidget_2);
        load->setObjectName(QStringLiteral("load"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Data/Pictures/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        load->setIcon(icon2);
        load->setIconSize(QSize(45, 45));

        horizontalLayout_7->addWidget(load);

        update = new QPushButton(layoutWidget_2);
        update->setObjectName(QStringLiteral("update"));
        update->setFont(font);
        QIcon icon3;
        icon3.addFile(QStringLiteral("Data/Pictures/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        update->setIcon(icon3);
        update->setIconSize(QSize(45, 45));

        horizontalLayout_7->addWidget(update);


        verticalLayout_4->addLayout(horizontalLayout_7);

        label = new QLabel(GestionVol_Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 20, 201, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(16);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(GestionVol_Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(21, 71, 423, 191));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        verticalLayout_2->addWidget(label_9);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        verticalLayout_2->addWidget(label_8);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        verticalLayout_2->addWidget(label_10);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        txt_idVol = new QLineEdit(widget);
        txt_idVol->setObjectName(QStringLiteral("txt_idVol"));
        txt_idVol->setEnabled(false);
        txt_idVol->setReadOnly(true);

        verticalLayout_3->addWidget(txt_idVol);

        txt_numVol = new QLineEdit(widget);
        txt_numVol->setObjectName(QStringLiteral("txt_numVol"));

        verticalLayout_3->addWidget(txt_numVol);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        txt_dateDepart = new QLineEdit(widget);
        txt_dateDepart->setObjectName(QStringLiteral("txt_dateDepart"));

        horizontalLayout_4->addWidget(txt_dateDepart);

        txt_heureDepart = new QLineEdit(widget);
        txt_heureDepart->setObjectName(QStringLiteral("txt_heureDepart"));

        horizontalLayout_4->addWidget(txt_heureDepart);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        txt_dateArrivee = new QLineEdit(widget);
        txt_dateArrivee->setObjectName(QStringLiteral("txt_dateArrivee"));

        horizontalLayout_6->addWidget(txt_dateArrivee);

        txt_heureArrivee = new QLineEdit(widget);
        txt_heureArrivee->setObjectName(QStringLiteral("txt_heureArrivee"));

        horizontalLayout_6->addWidget(txt_heureArrivee);


        verticalLayout_3->addLayout(horizontalLayout_6);

        txt_aeroportDepart = new QLineEdit(widget);
        txt_aeroportDepart->setObjectName(QStringLiteral("txt_aeroportDepart"));

        verticalLayout_3->addWidget(txt_aeroportDepart);

        txt_aeroportArrivee = new QLineEdit(widget);
        txt_aeroportArrivee->setObjectName(QStringLiteral("txt_aeroportArrivee"));

        verticalLayout_3->addWidget(txt_aeroportArrivee);

        txt_numAvion = new QLineEdit(widget);
        txt_numAvion->setObjectName(QStringLiteral("txt_numAvion"));

        verticalLayout_3->addWidget(txt_numAvion);

        txt_nombrePlace = new QLineEdit(widget);
        txt_nombrePlace->setObjectName(QStringLiteral("txt_nombrePlace"));

        verticalLayout_3->addWidget(txt_nombrePlace);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(GestionVol_Dialog);

        QMetaObject::connectSlotsByName(GestionVol_Dialog);
    } // setupUi

    void retranslateUi(QDialog *GestionVol_Dialog)
    {
        GestionVol_Dialog->setWindowTitle(QApplication::translate("GestionVol_Dialog", "Dialog", 0));
        delete_2->setText(QApplication::translate("GestionVol_Dialog", "Delete", 0));
        save->setText(QApplication::translate("GestionVol_Dialog", "Save", 0));
        load->setText(QApplication::translate("GestionVol_Dialog", "Load", 0));
        update->setText(QApplication::translate("GestionVol_Dialog", "Update", 0));
        label->setText(QApplication::translate("GestionVol_Dialog", "Gestion de vol", 0));
        label_9->setText(QApplication::translate("GestionVol_Dialog", "ID Vol", 0));
        label_3->setText(QApplication::translate("GestionVol_Dialog", "Num\303\251ro vol                 ", 0));
        label_4->setText(QApplication::translate("GestionVol_Dialog", "Date et heure d\303\251part   ", 0));
        label_5->setText(QApplication::translate("GestionVol_Dialog", "Date et heure d\342\200\231arriv\303\251e", 0));
        label_6->setText(QApplication::translate("GestionVol_Dialog", "A\303\251roport d\303\251part          ", 0));
        label_7->setText(QApplication::translate("GestionVol_Dialog", "A\303\251roport d\342\200\231arriv\303\251e       ", 0));
        label_8->setText(QApplication::translate("GestionVol_Dialog", "Num\303\251ro avion            ", 0));
        label_10->setText(QApplication::translate("GestionVol_Dialog", "Nombre de place", 0));
        txt_aeroportDepart->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GestionVol_Dialog: public Ui_GestionVol_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONVOL_DIALOG_H
