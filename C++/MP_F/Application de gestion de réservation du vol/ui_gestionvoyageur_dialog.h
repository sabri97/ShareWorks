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
#include <QtWidgets/QGroupBox>
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
    QLabel *label_gif1;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
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
    QLabel *label_10;

    void setupUi(QDialog *GestionVoyageur_Dialog)
    {
        if (GestionVoyageur_Dialog->objectName().isEmpty())
            GestionVoyageur_Dialog->setObjectName(QStringLiteral("GestionVoyageur_Dialog"));
        GestionVoyageur_Dialog->resize(695, 538);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(131, 215, 159, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        GestionVoyageur_Dialog->setPalette(palette);
        label = new QLabel(GestionVoyageur_Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 9, 271, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label->setPalette(palette1);
        QFont font;
        font.setFamily(QStringLiteral("High Tower Text"));
        font.setPointSize(22);
        font.setItalic(true);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        tableView = new QTableView(GestionVoyageur_Dialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 380, 671, 150));
        layoutWidget_2 = new QWidget(GestionVoyageur_Dialog);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(440, 250, 241, 118));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        delete_2 = new QPushButton(layoutWidget_2);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("High Tower Text"));
        font1.setPointSize(16);
        font1.setItalic(true);
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
        load->setFont(font1);
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

        label_gif1 = new QLabel(GestionVoyageur_Dialog);
        label_gif1->setObjectName(QStringLiteral("label_gif1"));
        label_gif1->setGeometry(QRect(480, 50, 151, 151));
        groupBox = new QGroupBox(GestionVoyageur_Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 60, 421, 311));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 19, 401, 276));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        verticalLayout_2->addWidget(label_9);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        verticalLayout_2->addWidget(label_6);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        verticalLayout_2->addWidget(label_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_2->addWidget(label_5);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        verticalLayout_2->addWidget(label_8);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        txt_idVoyageur = new QLineEdit(layoutWidget);
        txt_idVoyageur->setObjectName(QStringLiteral("txt_idVoyageur"));
        txt_idVoyageur->setEnabled(false);
        txt_idVoyageur->setReadOnly(true);

        verticalLayout_3->addWidget(txt_idVoyageur);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        txt_nom = new QLineEdit(layoutWidget);
        txt_nom->setObjectName(QStringLiteral("txt_nom"));
        txt_nom->setFont(font1);

        horizontalLayout_4->addWidget(txt_nom);

        txt_prenom = new QLineEdit(layoutWidget);
        txt_prenom->setObjectName(QStringLiteral("txt_prenom"));
        txt_prenom->setFont(font1);

        horizontalLayout_4->addWidget(txt_prenom);


        verticalLayout_3->addLayout(horizontalLayout_4);

        txt_nationalite = new QLineEdit(layoutWidget);
        txt_nationalite->setObjectName(QStringLiteral("txt_nationalite"));
        txt_nationalite->setFont(font1);

        verticalLayout_3->addWidget(txt_nationalite);

        txt_telephone = new QLineEdit(layoutWidget);
        txt_telephone->setObjectName(QStringLiteral("txt_telephone"));
        txt_telephone->setFont(font1);

        verticalLayout_3->addWidget(txt_telephone);

        txt_mail = new QLineEdit(layoutWidget);
        txt_mail->setObjectName(QStringLiteral("txt_mail"));
        txt_mail->setFont(font1);

        verticalLayout_3->addWidget(txt_mail);

        txt_numPassport = new QLineEdit(layoutWidget);
        txt_numPassport->setObjectName(QStringLiteral("txt_numPassport"));
        txt_numPassport->setFont(font1);

        verticalLayout_3->addWidget(txt_numPassport);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        txt_dateReservation = new QLineEdit(layoutWidget);
        txt_dateReservation->setObjectName(QStringLiteral("txt_dateReservation"));
        txt_dateReservation->setEnabled(false);
        txt_dateReservation->setAutoFillBackground(false);
        txt_dateReservation->setReadOnly(false);

        horizontalLayout_6->addWidget(txt_dateReservation);

        txt_heureReservation = new QLineEdit(layoutWidget);
        txt_heureReservation->setObjectName(QStringLiteral("txt_heureReservation"));
        txt_heureReservation->setEnabled(false);
        txt_heureReservation->setReadOnly(false);

        horizontalLayout_6->addWidget(txt_heureReservation);


        verticalLayout_3->addLayout(horizontalLayout_6);

        txt_idVol = new QLineEdit(layoutWidget);
        txt_idVol->setObjectName(QStringLiteral("txt_idVol"));
        txt_idVol->setFont(font1);

        verticalLayout_3->addWidget(txt_idVol);


        horizontalLayout->addLayout(verticalLayout_3);

        label_10 = new QLabel(GestionVoyageur_Dialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 0, 721, 541));
        label_10->setPixmap(QPixmap(QString::fromUtf8("Data/Pictures/2155719.jpg")));
        label_10->raise();
        label->raise();
        tableView->raise();
        layoutWidget_2->raise();
        label_gif1->raise();
        groupBox->raise();

        retranslateUi(GestionVoyageur_Dialog);

        QMetaObject::connectSlotsByName(GestionVoyageur_Dialog);
    } // setupUi

    void retranslateUi(QDialog *GestionVoyageur_Dialog)
    {
        GestionVoyageur_Dialog->setWindowTitle(QApplication::translate("GestionVoyageur_Dialog", "Dialog", 0));
        label->setText(QApplication::translate("GestionVoyageur_Dialog", "Traveler management", 0));
        delete_2->setText(QApplication::translate("GestionVoyageur_Dialog", "Delete", 0));
        save->setText(QApplication::translate("GestionVoyageur_Dialog", "Save", 0));
        load->setText(QApplication::translate("GestionVoyageur_Dialog", "Load", 0));
        update->setText(QApplication::translate("GestionVoyageur_Dialog", "Update", 0));
        label_gif1->setText(QString());
        groupBox->setTitle(QApplication::translate("GestionVoyageur_Dialog", "GroupBox", 0));
        label_9->setText(QApplication::translate("GestionVoyageur_Dialog", "Traveler ID", 0));
        label_6->setText(QApplication::translate("GestionVoyageur_Dialog", "Last name and first name", 0));
        label_3->setText(QApplication::translate("GestionVoyageur_Dialog", "Nationality", 0));
        label_5->setText(QApplication::translate("GestionVoyageur_Dialog", "Phone number", 0));
        label_7->setText(QApplication::translate("GestionVoyageur_Dialog", "E-mail", 0));
        label_8->setText(QApplication::translate("GestionVoyageur_Dialog", "Passport number", 0));
        label_4->setText(QApplication::translate("GestionVoyageur_Dialog", "Date and time of reservation", 0));
        label_2->setText(QApplication::translate("GestionVoyageur_Dialog", "Flight ID", 0));
        txt_telephone->setText(QString());
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GestionVoyageur_Dialog: public Ui_GestionVoyageur_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONVOYAGEUR_DIALOG_H
