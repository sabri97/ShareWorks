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
#include <QtWidgets/QDialog>
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
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
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
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *delete_2;
    QPushButton *save;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *load;
    QPushButton *update;
    QWidget *tab_3;
    QLabel *label;
    QLabel *label_background2;
    QLabel *label_date;
    QLabel *label_time;

    void setupUi(QDialog *User_Dialog)
    {
        if (User_Dialog->objectName().isEmpty())
            User_Dialog->setObjectName(QStringLiteral("User_Dialog"));
        User_Dialog->resize(755, 571);
        tabWidget = new QTabWidget(User_Dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 30, 701, 411));
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
        label_dbState->setGeometry(QRect(580, 360, 121, 20));
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
        tableView->setGeometry(QRect(10, 210, 671, 151));
        layoutWidget_2 = new QWidget(tab_4);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 421, 191));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        font2.setPointSize(10);
        label_9->setFont(font2);

        verticalLayout_2->addWidget(label_9);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font2);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);

        verticalLayout_2->addWidget(label_8);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        txt_idVol = new QLineEdit(layoutWidget_2);
        txt_idVol->setObjectName(QStringLiteral("txt_idVol"));
        txt_idVol->setReadOnly(true);

        verticalLayout_3->addWidget(txt_idVol);

        txt_numVol = new QLineEdit(layoutWidget_2);
        txt_numVol->setObjectName(QStringLiteral("txt_numVol"));

        verticalLayout_3->addWidget(txt_numVol);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        txt_dateDepart = new QLineEdit(layoutWidget_2);
        txt_dateDepart->setObjectName(QStringLiteral("txt_dateDepart"));

        horizontalLayout_4->addWidget(txt_dateDepart);

        txt_heureDepart = new QLineEdit(layoutWidget_2);
        txt_heureDepart->setObjectName(QStringLiteral("txt_heureDepart"));

        horizontalLayout_4->addWidget(txt_heureDepart);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        txt_dateArrivee = new QLineEdit(layoutWidget_2);
        txt_dateArrivee->setObjectName(QStringLiteral("txt_dateArrivee"));

        horizontalLayout_6->addWidget(txt_dateArrivee);

        txt_heureArrivee = new QLineEdit(layoutWidget_2);
        txt_heureArrivee->setObjectName(QStringLiteral("txt_heureArrivee"));

        horizontalLayout_6->addWidget(txt_heureArrivee);


        verticalLayout_3->addLayout(horizontalLayout_6);

        txt_aeroportDepart = new QLineEdit(layoutWidget_2);
        txt_aeroportDepart->setObjectName(QStringLiteral("txt_aeroportDepart"));

        verticalLayout_3->addWidget(txt_aeroportDepart);

        txt_aeroportArrivee = new QLineEdit(layoutWidget_2);
        txt_aeroportArrivee->setObjectName(QStringLiteral("txt_aeroportArrivee"));

        verticalLayout_3->addWidget(txt_aeroportArrivee);

        txt_numAvion = new QLineEdit(layoutWidget_2);
        txt_numAvion->setObjectName(QStringLiteral("txt_numAvion"));

        verticalLayout_3->addWidget(txt_numAvion);


        horizontalLayout_3->addLayout(verticalLayout_3);

        layoutWidget_3 = new QWidget(tab_4);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(450, 40, 231, 131));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        delete_2 = new QPushButton(layoutWidget_3);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        delete_2->setFont(font2);
        QIcon icon;
        icon.addFile(QStringLiteral("Data/Pictures/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_2->setIcon(icon);
        delete_2->setIconSize(QSize(45, 45));

        horizontalLayout_5->addWidget(delete_2);

        save = new QPushButton(layoutWidget_3);
        save->setObjectName(QStringLiteral("save"));
        save->setFont(font2);
        QIcon icon1;
        icon1.addFile(QStringLiteral("Data/Pictures/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon1);
        save->setIconSize(QSize(45, 45));

        horizontalLayout_5->addWidget(save);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        load = new QPushButton(layoutWidget_3);
        load->setObjectName(QStringLiteral("load"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Data/Pictures/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        load->setIcon(icon2);
        load->setIconSize(QSize(45, 45));

        horizontalLayout_7->addWidget(load);

        update = new QPushButton(layoutWidget_3);
        update->setObjectName(QStringLiteral("update"));
        update->setFont(font2);
        QIcon icon3;
        icon3.addFile(QStringLiteral("Data/Pictures/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        update->setIcon(icon3);
        update->setIconSize(QSize(45, 45));

        horizontalLayout_7->addWidget(update);


        verticalLayout_4->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab_4, QString());
        layoutWidget_2->raise();
        layoutWidget_3->raise();
        label_dbState->raise();
        tableView->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 480, 104));
        tabWidget->addTab(tab_3, QString());
        label_background2 = new QLabel(User_Dialog);
        label_background2->setObjectName(QStringLiteral("label_background2"));
        label_background2->setGeometry(QRect(0, 0, 771, 531));
        QFont font3;
        font3.setStyleStrategy(QFont::PreferAntialias);
        label_background2->setFont(font3);
        label_date = new QLabel(User_Dialog);
        label_date->setObjectName(QStringLiteral("label_date"));
        label_date->setGeometry(QRect(495, 500, 121, 20));
        label_time = new QLabel(User_Dialog);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setGeometry(QRect(570, 450, 101, 20));
        label_background2->raise();
        tabWidget->raise();
        label_date->raise();
        label_time->raise();

        retranslateUi(User_Dialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(User_Dialog);
    } // setupUi

    void retranslateUi(QDialog *User_Dialog)
    {
        User_Dialog->setWindowTitle(QApplication::translate("User_Dialog", "Dialog", 0));
        label_bienvenue_admin->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("User_Dialog", "Bienvenue", 0));
        label_dbState->setText(QApplication::translate("User_Dialog", "TextLabel", 0));
        label_9->setText(QApplication::translate("User_Dialog", "ID Vol", 0));
        label_3->setText(QApplication::translate("User_Dialog", "Num\303\251ro vol                 ", 0));
        label_4->setText(QApplication::translate("User_Dialog", "Date et heure d\303\251part   ", 0));
        label_5->setText(QApplication::translate("User_Dialog", "Date et heure d\342\200\231arriv\303\251e", 0));
        label_6->setText(QApplication::translate("User_Dialog", "A\303\251roport d\303\251part          ", 0));
        label_7->setText(QApplication::translate("User_Dialog", "A\303\251roport d\342\200\231arriv\303\251e       ", 0));
        label_8->setText(QApplication::translate("User_Dialog", "Num\303\251ro avion            ", 0));
        txt_aeroportDepart->setText(QString());
        delete_2->setText(QApplication::translate("User_Dialog", "Delete", 0));
        save->setText(QApplication::translate("User_Dialog", "Save", 0));
        load->setText(QApplication::translate("User_Dialog", "Load", 0));
        update->setText(QApplication::translate("User_Dialog", "Update", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("User_Dialog", "G\303\251rer les r\303\251servations", 0));
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
        label_date->setText(QApplication::translate("User_Dialog", "TextLabel", 0));
        label_time->setText(QApplication::translate("User_Dialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class User_Dialog: public Ui_User_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_DIALOG_H
