/********************************************************************************
** Form generated from reading UI file 'gestionvoyageur_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONVOYAGEUR_DIALOG_H
#define UI_GESTIONVOYAGEUR_DIALOG_H

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

class Ui_GestionVoyageur_Dialog
{
public:
    QLabel *label;
    QTableView *tableView;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *delete_2;
    QPushButton *save;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *load;
    QPushButton *update;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *txt_idVoyageur;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *txt_nom;
    QLineEdit *txt_prenom;
    QLineEdit *txt_nationalite;
    QLineEdit *txt_telephone;
    QLineEdit *txt_mail;
    QLineEdit *txt_numPassport;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *txt_dateReservation;
    QLineEdit *txt_heureReservation;
    QLineEdit *txt_idVol;

    void setupUi(QDialog *GestionVoyageur_Dialog)
    {
        if (GestionVoyageur_Dialog->objectName().isEmpty())
            GestionVoyageur_Dialog->setObjectName(QStringLiteral("GestionVoyageur_Dialog"));
        GestionVoyageur_Dialog->resize(787, 467);
        label = new QLabel(GestionVoyageur_Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 9, 201, 31));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(16);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        tableView = new QTableView(GestionVoyageur_Dialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 280, 671, 150));
        layoutWidget_2 = new QWidget(GestionVoyageur_Dialog);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(450, 90, 231, 130));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        delete_2 = new QPushButton(layoutWidget_2);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(10);
        delete_2->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral("Data/Pictures/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_2->setIcon(icon);
        delete_2->setIconSize(QSize(45, 45));

        horizontalLayout_5->addWidget(delete_2);

        save = new QPushButton(layoutWidget_2);
        save->setObjectName(QStringLiteral("save"));
        save->setFont(font1);
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
        update->setFont(font1);
        QIcon icon3;
        icon3.addFile(QStringLiteral("Data/Pictures/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        update->setIcon(icon3);
        update->setIconSize(QSize(45, 45));

        horizontalLayout_7->addWidget(update);


        verticalLayout_4->addLayout(horizontalLayout_7);

        widget = new QWidget(GestionVoyageur_Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 61, 421, 210));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        verticalLayout_2->addWidget(label_9);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        verticalLayout_2->addWidget(label_6);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_2->addWidget(label_5);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        verticalLayout_2->addWidget(label_8);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        txt_idVoyageur = new QLineEdit(widget);
        txt_idVoyageur->setObjectName(QStringLiteral("txt_idVoyageur"));
        txt_idVoyageur->setReadOnly(true);

        verticalLayout_3->addWidget(txt_idVoyageur);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        txt_nom = new QLineEdit(widget);
        txt_nom->setObjectName(QStringLiteral("txt_nom"));

        horizontalLayout_4->addWidget(txt_nom);

        txt_prenom = new QLineEdit(widget);
        txt_prenom->setObjectName(QStringLiteral("txt_prenom"));

        horizontalLayout_4->addWidget(txt_prenom);


        verticalLayout_3->addLayout(horizontalLayout_4);

        txt_nationalite = new QLineEdit(widget);
        txt_nationalite->setObjectName(QStringLiteral("txt_nationalite"));

        verticalLayout_3->addWidget(txt_nationalite);

        txt_telephone = new QLineEdit(widget);
        txt_telephone->setObjectName(QStringLiteral("txt_telephone"));

        verticalLayout_3->addWidget(txt_telephone);

        txt_mail = new QLineEdit(widget);
        txt_mail->setObjectName(QStringLiteral("txt_mail"));

        verticalLayout_3->addWidget(txt_mail);

        txt_numPassport = new QLineEdit(widget);
        txt_numPassport->setObjectName(QStringLiteral("txt_numPassport"));

        verticalLayout_3->addWidget(txt_numPassport);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        txt_dateReservation = new QLineEdit(widget);
        txt_dateReservation->setObjectName(QStringLiteral("txt_dateReservation"));

        horizontalLayout_6->addWidget(txt_dateReservation);

        txt_heureReservation = new QLineEdit(widget);
        txt_heureReservation->setObjectName(QStringLiteral("txt_heureReservation"));

        horizontalLayout_6->addWidget(txt_heureReservation);


        verticalLayout_3->addLayout(horizontalLayout_6);

        txt_idVol = new QLineEdit(widget);
        txt_idVol->setObjectName(QStringLiteral("txt_idVol"));

        verticalLayout_3->addWidget(txt_idVol);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(GestionVoyageur_Dialog);

        QMetaObject::connectSlotsByName(GestionVoyageur_Dialog);
    } // setupUi

    void retranslateUi(QDialog *GestionVoyageur_Dialog)
    {
        GestionVoyageur_Dialog->setWindowTitle(QApplication::translate("GestionVoyageur_Dialog", "Dialog", 0));
        label->setText(QApplication::translate("GestionVoyageur_Dialog", "Gestion de voyageur", 0));
        delete_2->setText(QApplication::translate("GestionVoyageur_Dialog", "Delete", 0));
        save->setText(QApplication::translate("GestionVoyageur_Dialog", "Save", 0));
        load->setText(QApplication::translate("GestionVoyageur_Dialog", "Load", 0));
        update->setText(QApplication::translate("GestionVoyageur_Dialog", "Update", 0));
        label_9->setText(QApplication::translate("GestionVoyageur_Dialog", "ID Voyageur", 0));
        label_6->setText(QApplication::translate("GestionVoyageur_Dialog", "Nom et Pr\303\251nom", 0));
        label_3->setText(QApplication::translate("GestionVoyageur_Dialog", "Nationalit\303\251", 0));
        label_5->setText(QApplication::translate("GestionVoyageur_Dialog", "Num\303\251ro de t\303\251l\303\251phone", 0));
        label_7->setText(QApplication::translate("GestionVoyageur_Dialog", "E-mail", 0));
        label_8->setText(QApplication::translate("GestionVoyageur_Dialog", "Num\303\251ro de passport", 0));
        label_4->setText(QApplication::translate("GestionVoyageur_Dialog", "Date et heure de reservation", 0));
        label_2->setText(QApplication::translate("GestionVoyageur_Dialog", "ID Vol", 0));
        txt_telephone->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GestionVoyageur_Dialog: public Ui_GestionVoyageur_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONVOYAGEUR_DIALOG_H
