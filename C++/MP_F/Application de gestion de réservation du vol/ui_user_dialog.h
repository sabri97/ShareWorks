/********************************************************************************
** Form generated from reading UI file 'user_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_DIALOG_H
#define UI_USER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_bienvenue_admin;
    QWidget *tab_4;
    QLabel *label_dbState;
    QTableView *tableView;
    QPushButton *Valid;
    QDateEdit *datedepEdit;
    QDateEdit *datearrEdit;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *load;
    QComboBox *aeroArr;
    QComboBox *aeroDep;
    QWidget *tab_2;
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
    QHBoxLayout *horizontalLayout_16;
    QLineEdit *txt_dateReservation;
    QLineEdit *txt_heureReservation;
    QLineEdit *txt_idVol;
    QPushButton *save;
    QWidget *tab_3;
    QLabel *label;
    QLabel *label_background2;
    QGroupBox *groupBox;
    QLabel *label_time;
    QLabel *label_date;

    void setupUi(QDialog *User_Dialog)
    {
        if (User_Dialog->objectName().isEmpty())
            User_Dialog->setObjectName(QStringLiteral("User_Dialog"));
        User_Dialog->resize(805, 571);
        tabWidget = new QTabWidget(User_Dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 701, 431));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(9);
        tabWidget->setFont(font);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(20, 20));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_bienvenue_admin = new QLabel(tab);
        label_bienvenue_admin->setObjectName(QStringLiteral("label_bienvenue_admin"));
        label_bienvenue_admin->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_bienvenue_admin);

        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_dbState = new QLabel(tab_4);
        label_dbState->setObjectName(QStringLiteral("label_dbState"));
        label_dbState->setGeometry(QRect(560, 410, 121, 20));
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_dbState->setPalette(palette);
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Light"));
        font1.setPointSize(10);
        label_dbState->setFont(font1);
        tableView = new QTableView(tab_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 200, 671, 171));
        Valid = new QPushButton(tab_4);
        Valid->setObjectName(QStringLiteral("Valid"));
        Valid->setGeometry(QRect(490, 110, 111, 51));
        QIcon icon;
        icon.addFile(QStringLiteral("Data/Pictures/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        Valid->setIcon(icon);
        Valid->setIconSize(QSize(45, 45));
        datedepEdit = new QDateEdit(tab_4);
        datedepEdit->setObjectName(QStringLiteral("datedepEdit"));
        datedepEdit->setGeometry(QRect(80, 50, 110, 22));
        datearrEdit = new QDateEdit(tab_4);
        datearrEdit->setObjectName(QStringLiteral("datearrEdit"));
        datearrEdit->setGeometry(QRect(270, 50, 110, 22));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 60, 46, 13));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(220, 60, 46, 13));
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 140, 46, 13));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(220, 140, 46, 13));
        load = new QPushButton(tab_4);
        load->setObjectName(QStringLiteral("load"));
        load->setGeometry(QRect(10, 380, 111, 51));
        load->setIcon(icon);
        load->setIconSize(QSize(45, 45));
        aeroArr = new QComboBox(tab_4);
        aeroArr->setObjectName(QStringLiteral("aeroArr"));
        aeroArr->setGeometry(QRect(70, 130, 141, 31));
        aeroDep = new QComboBox(tab_4);
        aeroDep->setObjectName(QStringLiteral("aeroDep"));
        aeroDep->setGeometry(QRect(280, 130, 141, 31));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 80, 421, 218));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        font2.setPointSize(10);
        label_9->setFont(font2);

        verticalLayout_2->addWidget(label_9);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        verticalLayout_2->addWidget(label_6);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font2);

        verticalLayout_2->addWidget(label_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        verticalLayout_2->addWidget(label_5);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);

        verticalLayout_2->addWidget(label_8);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        verticalLayout_2->addWidget(label_4);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

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

        horizontalLayout_4->addWidget(txt_nom);

        txt_prenom = new QLineEdit(layoutWidget);
        txt_prenom->setObjectName(QStringLiteral("txt_prenom"));

        horizontalLayout_4->addWidget(txt_prenom);


        verticalLayout_3->addLayout(horizontalLayout_4);

        txt_nationalite = new QLineEdit(layoutWidget);
        txt_nationalite->setObjectName(QStringLiteral("txt_nationalite"));

        verticalLayout_3->addWidget(txt_nationalite);

        txt_telephone = new QLineEdit(layoutWidget);
        txt_telephone->setObjectName(QStringLiteral("txt_telephone"));

        verticalLayout_3->addWidget(txt_telephone);

        txt_mail = new QLineEdit(layoutWidget);
        txt_mail->setObjectName(QStringLiteral("txt_mail"));

        verticalLayout_3->addWidget(txt_mail);

        txt_numPassport = new QLineEdit(layoutWidget);
        txt_numPassport->setObjectName(QStringLiteral("txt_numPassport"));

        verticalLayout_3->addWidget(txt_numPassport);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        txt_dateReservation = new QLineEdit(layoutWidget);
        txt_dateReservation->setObjectName(QStringLiteral("txt_dateReservation"));
        txt_dateReservation->setEnabled(false);
        txt_dateReservation->setAutoFillBackground(false);
        txt_dateReservation->setReadOnly(false);

        horizontalLayout_16->addWidget(txt_dateReservation);

        txt_heureReservation = new QLineEdit(layoutWidget);
        txt_heureReservation->setObjectName(QStringLiteral("txt_heureReservation"));
        txt_heureReservation->setEnabled(false);
        txt_heureReservation->setReadOnly(false);

        horizontalLayout_16->addWidget(txt_heureReservation);


        verticalLayout_3->addLayout(horizontalLayout_16);

        txt_idVol = new QLineEdit(layoutWidget);
        txt_idVol->setObjectName(QStringLiteral("txt_idVol"));

        verticalLayout_3->addWidget(txt_idVol);


        horizontalLayout->addLayout(verticalLayout_3);

        save = new QPushButton(tab_2);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(460, 150, 227, 53));
        save->setFont(font2);
        QIcon icon1;
        icon1.addFile(QStringLiteral("Data/Pictures/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon1);
        save->setIconSize(QSize(45, 45));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 480, 104));
        tabWidget->addTab(tab_3, QString());
        label_background2 = new QLabel(User_Dialog);
        label_background2->setObjectName(QStringLiteral("label_background2"));
        label_background2->setGeometry(QRect(0, 0, 911, 551));
        QFont font3;
        font3.setStyleStrategy(QFont::PreferAntialias);
        label_background2->setFont(font3);
        label_background2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox = new QGroupBox(User_Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 460, 701, 43));
        label_time = new QLabel(groupBox);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setGeometry(QRect(600, 10, 91, 20));
        QPalette palette1;
        QBrush brush2(QColor(113, 113, 113, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_time->setPalette(palette1);
        QFont font4;
        font4.setFamily(QStringLiteral("Comic Sans MS"));
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_time->setFont(font4);
        label_date = new QLabel(groupBox);
        label_date->setObjectName(QStringLiteral("label_date"));
        label_date->setGeometry(QRect(10, 10, 151, 21));
        QPalette palette2;
        QBrush brush3(QColor(107, 107, 107, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_date->setPalette(palette2);
        QFont font5;
        font5.setFamily(QStringLiteral("Comic Sans MS"));
        font5.setPointSize(12);
        label_date->setFont(font5);
        label_background2->raise();
        tabWidget->raise();
        groupBox->raise();

        retranslateUi(User_Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(User_Dialog);
    } // setupUi

    void retranslateUi(QDialog *User_Dialog)
    {
        User_Dialog->setWindowTitle(QApplication::translate("User_Dialog", "Dialog", 0));
        label_bienvenue_admin->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("User_Dialog", "Bienvenue", 0));
        label_dbState->setText(QApplication::translate("User_Dialog", "TextLabel", 0));
        Valid->setText(QApplication::translate("User_Dialog", "Valid", 0));
        label_10->setText(QApplication::translate("User_Dialog", "date dep", 0));
        label_11->setText(QApplication::translate("User_Dialog", "date arr", 0));
        label_12->setText(QApplication::translate("User_Dialog", "aeroarr", 0));
        label_13->setText(QApplication::translate("User_Dialog", "aerodep", 0));
        load->setText(QApplication::translate("User_Dialog", "Load all", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("User_Dialog", "G\303\251rer les r\303\251servations", 0));
        label_9->setText(QApplication::translate("User_Dialog", "ID Voyageur", 0));
        label_6->setText(QApplication::translate("User_Dialog", "Nom et Pr\303\251nom", 0));
        label_3->setText(QApplication::translate("User_Dialog", "Nationalit\303\251", 0));
        label_5->setText(QApplication::translate("User_Dialog", "Num\303\251ro de t\303\251l\303\251phone", 0));
        label_7->setText(QApplication::translate("User_Dialog", "E-mail", 0));
        label_8->setText(QApplication::translate("User_Dialog", "Num\303\251ro de passport", 0));
        label_4->setText(QApplication::translate("User_Dialog", "Date et heure de reservation", 0));
        label_2->setText(QApplication::translate("User_Dialog", "ID Vol", 0));
        txt_telephone->setText(QString());
        save->setText(QApplication::translate("User_Dialog", "Save", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("User_Dialog", "Inscription", 0));
        label->setText(QApplication::translate("User_Dialog", "Sujet 7 : Application de gestion de r\303\251servation du vol\n"
"L\342\200\231objectif est de d\303\251velopper une application graphique permettant de g\303\251rer les r\303\251servations des vols\n"
"au niveau d\342\200\231une agence de voyage. L\342\200\231utilisateur de cette application peut :\n"
"\357\202\267 Ajouter un vol (num\303\251ro vol, date et heure d\303\251part, date et heure d\342\200\231arriv\303\251e, A\303\251roport d\303\251part,\n"
"a\303\251roport d\342\200\231arriv\303\251e, num\303\251ro avion)\n"
"\357\202\267 Rechercher et consulter des vols existant par date d\303\251part, destination ..., etc.\n"
"\357\202\267 Ajouter un voyageur et lui r\303\251server un vol\n"
"\357\202\267 Il peut aussi modifier ou annuler un vol.", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("User_Dialog", "A propos", 0));
        label_background2->setText(QApplication::translate("User_Dialog", "TextLabel", 0));
        groupBox->setTitle(QString());
        label_time->setText(QApplication::translate("User_Dialog", "TextLabel", 0));
        label_date->setText(QApplication::translate("User_Dialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class User_Dialog: public Ui_User_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_DIALOG_H
