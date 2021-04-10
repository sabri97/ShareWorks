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
    QPushButton *load;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QDateEdit *datedepEdit;
    QLabel *label_11;
    QDateEdit *datearrEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_13;
    QComboBox *aeroDep;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QComboBox *aeroArr;
    QLabel *bguser;
    QLabel *label_14;
    QWidget *tab_2;
    QPushButton *save;
    QLabel *bguser_2;
    QWidget *layoutWidget_2;
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
    QLabel *label_15;
    QWidget *tab_3;
    QLabel *label;
    QLabel *bguser_3;
    QLabel *label_background2;
    QGroupBox *groupBox;
    QLabel *label_time;
    QLabel *label_date;

    void setupUi(QDialog *User_Dialog)
    {
        if (User_Dialog->objectName().isEmpty())
            User_Dialog->setObjectName(QStringLiteral("User_Dialog"));
        User_Dialog->resize(739, 499);
        tabWidget = new QTabWidget(User_Dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 691, 411));
        QFont font;
        font.setFamily(QStringLiteral("High Tower Text"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(30, 30));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_bienvenue_admin = new QLabel(tab);
        label_bienvenue_admin->setObjectName(QStringLiteral("label_bienvenue_admin"));
        label_bienvenue_admin->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_bienvenue_admin);

        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Data/Pictures/welcomeIcone.jpg"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(tab, icon, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_dbState = new QLabel(tab_4);
        label_dbState->setObjectName(QStringLiteral("label_dbState"));
        label_dbState->setGeometry(QRect(540, 340, 141, 20));
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
        tableView->setGeometry(QRect(10, 170, 661, 161));
        Valid = new QPushButton(tab_4);
        Valid->setObjectName(QStringLiteral("Valid"));
        Valid->setGeometry(QRect(500, 50, 171, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("High Tower Text"));
        font2.setPointSize(16);
        font2.setItalic(true);
        Valid->setFont(font2);
        QIcon icon1;
        icon1.addFile(QStringLiteral("Data/Pictures/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        Valid->setIcon(icon1);
        Valid->setIconSize(QSize(45, 45));
        load = new QPushButton(tab_4);
        load->setObjectName(QStringLiteral("load"));
        load->setGeometry(QRect(500, 110, 171, 51));
        load->setFont(font2);
        load->setIcon(icon1);
        load->setIconSize(QSize(45, 45));
        layoutWidget = new QWidget(tab_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 481, 115));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font3;
        font3.setFamily(QStringLiteral("High Tower Text"));
        font3.setPointSize(16);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        label_10->setFont(font3);

        horizontalLayout_3->addWidget(label_10);

        datedepEdit = new QDateEdit(layoutWidget);
        datedepEdit->setObjectName(QStringLiteral("datedepEdit"));
        datedepEdit->setFont(font3);

        horizontalLayout_3->addWidget(datedepEdit);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font3);

        horizontalLayout_3->addWidget(label_11);

        datearrEdit = new QDateEdit(layoutWidget);
        datearrEdit->setObjectName(QStringLiteral("datearrEdit"));
        datearrEdit->setFont(font3);

        horizontalLayout_3->addWidget(datearrEdit);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font3);

        horizontalLayout_5->addWidget(label_13);

        aeroDep = new QComboBox(layoutWidget);
        aeroDep->setObjectName(QStringLiteral("aeroDep"));
        aeroDep->setFont(font3);

        horizontalLayout_5->addWidget(aeroDep);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font3);

        horizontalLayout_6->addWidget(label_12);

        aeroArr = new QComboBox(layoutWidget);
        aeroArr->setObjectName(QStringLiteral("aeroArr"));
        aeroArr->setFont(font3);

        horizontalLayout_6->addWidget(aeroArr);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_4->addLayout(verticalLayout);

        bguser = new QLabel(tab_4);
        bguser->setObjectName(QStringLiteral("bguser"));
        bguser->setGeometry(QRect(0, 0, 701, 461));
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 10, 601, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Data/Pictures/consultingIcone.jpg"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(tab_4, icon2, QString());
        bguser->raise();
        layoutWidget->raise();
        label_dbState->raise();
        tableView->raise();
        Valid->raise();
        load->raise();
        label_14->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        save = new QPushButton(tab_2);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(500, 300, 181, 51));
        QFont font4;
        font4.setFamily(QStringLiteral("High Tower Text"));
        font4.setPointSize(16);
        font4.setBold(false);
        font4.setWeight(50);
        save->setFont(font4);
        QIcon icon3;
        icon3.addFile(QStringLiteral("Data/Pictures/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon3);
        save->setIconSize(QSize(45, 45));
        bguser_2 = new QLabel(tab_2);
        bguser_2->setObjectName(QStringLiteral("bguser_2"));
        bguser_2->setGeometry(QRect(0, 0, 711, 461));
        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 101, 481, 251));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font4);

        verticalLayout_2->addWidget(label_9);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font4);

        verticalLayout_2->addWidget(label_6);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font4);

        verticalLayout_2->addWidget(label_3);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font4);

        verticalLayout_2->addWidget(label_5);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font4);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font4);

        verticalLayout_2->addWidget(label_8);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font4);

        verticalLayout_2->addWidget(label_4);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font4);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        txt_idVoyageur = new QLineEdit(layoutWidget_2);
        txt_idVoyageur->setObjectName(QStringLiteral("txt_idVoyageur"));
        txt_idVoyageur->setEnabled(false);
        txt_idVoyageur->setReadOnly(true);

        verticalLayout_3->addWidget(txt_idVoyageur);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        txt_nom = new QLineEdit(layoutWidget_2);
        txt_nom->setObjectName(QStringLiteral("txt_nom"));
        txt_nom->setFont(font4);

        horizontalLayout_4->addWidget(txt_nom);

        txt_prenom = new QLineEdit(layoutWidget_2);
        txt_prenom->setObjectName(QStringLiteral("txt_prenom"));
        txt_prenom->setFont(font4);

        horizontalLayout_4->addWidget(txt_prenom);


        verticalLayout_3->addLayout(horizontalLayout_4);

        txt_nationalite = new QLineEdit(layoutWidget_2);
        txt_nationalite->setObjectName(QStringLiteral("txt_nationalite"));
        txt_nationalite->setFont(font4);

        verticalLayout_3->addWidget(txt_nationalite);

        txt_telephone = new QLineEdit(layoutWidget_2);
        txt_telephone->setObjectName(QStringLiteral("txt_telephone"));
        txt_telephone->setFont(font4);

        verticalLayout_3->addWidget(txt_telephone);

        txt_mail = new QLineEdit(layoutWidget_2);
        txt_mail->setObjectName(QStringLiteral("txt_mail"));
        txt_mail->setFont(font4);

        verticalLayout_3->addWidget(txt_mail);

        txt_numPassport = new QLineEdit(layoutWidget_2);
        txt_numPassport->setObjectName(QStringLiteral("txt_numPassport"));
        txt_numPassport->setFont(font4);

        verticalLayout_3->addWidget(txt_numPassport);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        txt_dateReservation = new QLineEdit(layoutWidget_2);
        txt_dateReservation->setObjectName(QStringLiteral("txt_dateReservation"));
        txt_dateReservation->setEnabled(false);
        txt_dateReservation->setAutoFillBackground(false);
        txt_dateReservation->setReadOnly(false);

        horizontalLayout_16->addWidget(txt_dateReservation);

        txt_heureReservation = new QLineEdit(layoutWidget_2);
        txt_heureReservation->setObjectName(QStringLiteral("txt_heureReservation"));
        txt_heureReservation->setEnabled(false);
        txt_heureReservation->setReadOnly(false);

        horizontalLayout_16->addWidget(txt_heureReservation);


        verticalLayout_3->addLayout(horizontalLayout_16);

        txt_idVol = new QLineEdit(layoutWidget_2);
        txt_idVol->setObjectName(QStringLiteral("txt_idVol"));
        txt_idVol->setFont(font4);

        verticalLayout_3->addWidget(txt_idVol);


        horizontalLayout->addLayout(verticalLayout_3);

        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 10, 661, 71));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/Data/Pictures/inscription.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(tab_2, icon4, QString());
        bguser_2->raise();
        save->raise();
        layoutWidget_2->raise();
        label_15->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 681, 161));
        QFont font5;
        font5.setPointSize(11);
        label->setFont(font5);
        bguser_3 = new QLabel(tab_3);
        bguser_3->setObjectName(QStringLiteral("bguser_3"));
        bguser_3->setGeometry(QRect(0, 0, 701, 461));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/Data/Pictures/aboutIcone.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon5, QString());
        bguser_3->raise();
        label->raise();
        label_background2 = new QLabel(User_Dialog);
        label_background2->setObjectName(QStringLiteral("label_background2"));
        label_background2->setGeometry(QRect(0, 0, 911, 581));
        QFont font6;
        font6.setStyleStrategy(QFont::PreferAntialias);
        label_background2->setFont(font6);
        label_background2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox = new QGroupBox(User_Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 440, 691, 43));
        label_time = new QLabel(groupBox);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setGeometry(QRect(590, 10, 101, 20));
        QPalette palette1;
        QBrush brush2(QColor(113, 113, 113, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_time->setPalette(palette1);
        QFont font7;
        font7.setFamily(QStringLiteral("Comic Sans MS"));
        font7.setPointSize(12);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setWeight(50);
        label_time->setFont(font7);
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
        QFont font8;
        font8.setFamily(QStringLiteral("Comic Sans MS"));
        font8.setPointSize(12);
        label_date->setFont(font8);
        label_background2->raise();
        tabWidget->raise();
        groupBox->raise();

        retranslateUi(User_Dialog);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(User_Dialog);
    } // setupUi

    void retranslateUi(QDialog *User_Dialog)
    {
        User_Dialog->setWindowTitle(QApplication::translate("User_Dialog", "Dialog", 0));
        label_bienvenue_admin->setText(QApplication::translate("User_Dialog", "R", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("User_Dialog", "Welcome", 0));
        label_dbState->setText(QApplication::translate("User_Dialog", "TextLabel", 0));
        Valid->setText(QApplication::translate("User_Dialog", "Valid", 0));
        load->setText(QApplication::translate("User_Dialog", "Load all", 0));
        label_10->setText(QApplication::translate("User_Dialog", "Departure date", 0));
        label_11->setText(QApplication::translate("User_Dialog", "Date arrived", 0));
        label_13->setText(QApplication::translate("User_Dialog", "Departure airport", 0));
        label_12->setText(QApplication::translate("User_Dialog", "Airport arrived", 0));
        bguser->setText(QApplication::translate("User_Dialog", "TextLabel", 0));
        label_14->setText(QApplication::translate("User_Dialog", "You can use this page to check the available flight. ", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("User_Dialog", "Travel consultation", 0));
        save->setText(QApplication::translate("User_Dialog", "Save", 0));
        bguser_2->setText(QApplication::translate("User_Dialog", "TextLabel", 0));
        label_9->setText(QApplication::translate("User_Dialog", "ID Voyageur", 0));
        label_6->setText(QApplication::translate("User_Dialog", "Nom et Pr\303\251nom", 0));
        label_3->setText(QApplication::translate("User_Dialog", "Nationalit\303\251", 0));
        label_5->setText(QApplication::translate("User_Dialog", "Num\303\251ro de t\303\251l\303\251phone", 0));
        label_7->setText(QApplication::translate("User_Dialog", "E-mail", 0));
        label_8->setText(QApplication::translate("User_Dialog", "Num\303\251ro de passport", 0));
        label_4->setText(QApplication::translate("User_Dialog", "Date et heure de reservation", 0));
        label_2->setText(QApplication::translate("User_Dialog", "ID Vol", 0));
        txt_telephone->setText(QString());
        label_15->setText(QApplication::translate("User_Dialog", "You can use this page to check in. \n"
"You\342\200\231ll still need to go to the airport check-in counter for us to verify your travel\n"
" documents and issue your boarding pass.", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("User_Dialog", "Inscription", 0));
        label->setText(QApplication::translate("User_Dialog", "Sujet 7 : Application de gestion de r\303\251servation du vol\n"
"L\342\200\231objectif est de d\303\251velopper une application graphique permettant de g\303\251rer les r\303\251servations des vols\n"
"au niveau d\342\200\231une agence de voyage. L\342\200\231utilisateur de cette application peut :\n"
"\357\202\267 Ajouter un vol (num\303\251ro vol, date et heure d\303\251part, date et heure d\342\200\231arriv\303\251e, A\303\251roport d\303\251part,\n"
"a\303\251roport d\342\200\231arriv\303\251e, num\303\251ro avion)\n"
"\357\202\267 Rechercher et consulter des vols existant par date d\303\251part, destination ..., etc.\n"
"\357\202\267 Ajouter un voyageur et lui r\303\251server un vol\n"
"\357\202\267 Il peut aussi modifier ou annuler un vol.", 0));
        bguser_3->setText(QApplication::translate("User_Dialog", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("User_Dialog", "About", 0));
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
