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
    QLabel *label_gif1;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
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
    QLabel *label_11;

    void setupUi(QDialog *GestionVol_Dialog)
    {
        if (GestionVol_Dialog->objectName().isEmpty())
            GestionVol_Dialog->setObjectName(QStringLiteral("GestionVol_Dialog"));
        GestionVol_Dialog->resize(695, 533);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(211, 223, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        GestionVol_Dialog->setPalette(palette);
        tableView = new QTableView(GestionVol_Dialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 370, 671, 151));
        layoutWidget_2 = new QWidget(GestionVol_Dialog);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(430, 230, 251, 131));
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
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        save->setPalette(palette1);
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
        label->setGeometry(QRect(240, 20, 201, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        label->setPalette(palette2);
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(20);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        label_gif1 = new QLabel(GestionVol_Dialog);
        label_gif1->setObjectName(QStringLiteral("label_gif1"));
        label_gif1->setGeometry(QRect(470, 70, 181, 151));
        groupBox = new QGroupBox(GestionVol_Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 120, 411, 241));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 391, 210));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        verticalLayout_2->addWidget(label_9);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        verticalLayout_2->addWidget(label_8);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        verticalLayout_2->addWidget(label_10);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        txt_idVol = new QLineEdit(layoutWidget);
        txt_idVol->setObjectName(QStringLiteral("txt_idVol"));
        txt_idVol->setEnabled(false);
        txt_idVol->setReadOnly(true);

        verticalLayout_3->addWidget(txt_idVol);

        txt_numVol = new QLineEdit(layoutWidget);
        txt_numVol->setObjectName(QStringLiteral("txt_numVol"));

        verticalLayout_3->addWidget(txt_numVol);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        txt_dateDepart = new QLineEdit(layoutWidget);
        txt_dateDepart->setObjectName(QStringLiteral("txt_dateDepart"));

        horizontalLayout_4->addWidget(txt_dateDepart);

        txt_heureDepart = new QLineEdit(layoutWidget);
        txt_heureDepart->setObjectName(QStringLiteral("txt_heureDepart"));

        horizontalLayout_4->addWidget(txt_heureDepart);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        txt_dateArrivee = new QLineEdit(layoutWidget);
        txt_dateArrivee->setObjectName(QStringLiteral("txt_dateArrivee"));

        horizontalLayout_6->addWidget(txt_dateArrivee);

        txt_heureArrivee = new QLineEdit(layoutWidget);
        txt_heureArrivee->setObjectName(QStringLiteral("txt_heureArrivee"));

        horizontalLayout_6->addWidget(txt_heureArrivee);


        verticalLayout_3->addLayout(horizontalLayout_6);

        txt_aeroportDepart = new QLineEdit(layoutWidget);
        txt_aeroportDepart->setObjectName(QStringLiteral("txt_aeroportDepart"));

        verticalLayout_3->addWidget(txt_aeroportDepart);

        txt_aeroportArrivee = new QLineEdit(layoutWidget);
        txt_aeroportArrivee->setObjectName(QStringLiteral("txt_aeroportArrivee"));

        verticalLayout_3->addWidget(txt_aeroportArrivee);

        txt_numAvion = new QLineEdit(layoutWidget);
        txt_numAvion->setObjectName(QStringLiteral("txt_numAvion"));

        verticalLayout_3->addWidget(txt_numAvion);

        txt_nombrePlace = new QLineEdit(layoutWidget);
        txt_nombrePlace->setObjectName(QStringLiteral("txt_nombrePlace"));

        verticalLayout_3->addWidget(txt_nombrePlace);


        horizontalLayout->addLayout(verticalLayout_3);

        layoutWidget->raise();
        layoutWidget->raise();
        label_11 = new QLabel(GestionVol_Dialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 0, 721, 541));
        label_11->setPixmap(QPixmap(QString::fromUtf8("Data/Pictures/2155719.jpg")));
        label_11->raise();
        tableView->raise();
        layoutWidget_2->raise();
        label->raise();
        label_gif1->raise();
        groupBox->raise();

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
        label_gif1->setText(QString());
        groupBox->setTitle(QApplication::translate("GestionVol_Dialog", "GroupBox", 0));
        label_9->setText(QApplication::translate("GestionVol_Dialog", "ID Vol", 0));
        label_3->setText(QApplication::translate("GestionVol_Dialog", "Num\303\251ro vol                 ", 0));
        label_4->setText(QApplication::translate("GestionVol_Dialog", "Date et heure d\303\251part   ", 0));
        label_5->setText(QApplication::translate("GestionVol_Dialog", "Date et heure d\342\200\231arriv\303\251e", 0));
        label_6->setText(QApplication::translate("GestionVol_Dialog", "A\303\251roport d\303\251part          ", 0));
        label_7->setText(QApplication::translate("GestionVol_Dialog", "A\303\251roport d\342\200\231arriv\303\251e       ", 0));
        label_8->setText(QApplication::translate("GestionVol_Dialog", "Num\303\251ro avion            ", 0));
        label_10->setText(QApplication::translate("GestionVol_Dialog", "Nombre de place", 0));
        txt_aeroportDepart->setText(QString());
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GestionVol_Dialog: public Ui_GestionVol_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONVOL_DIALOG_H
