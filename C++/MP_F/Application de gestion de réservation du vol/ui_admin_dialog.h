/********************************************************************************
** Form generated from reading UI file 'admin_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_DIALOG_H
#define UI_ADMIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_bienvenue_admin;
    QWidget *tab_2;
    QLabel *label_login;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *bguser;
    QWidget *tab_4;
    QLabel *label_dbState;
    QLabel *bguser_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *gestionVol;
    QPushButton *gestionVoyageur;
    QWidget *tab_3;
    QLabel *label;
    QLabel *bguser_3;
    QLabel *label_background2;
    QGroupBox *groupBox;
    QLabel *label_time;
    QLabel *label_date;
    QFrame *frame;

    void setupUi(QDialog *Admin_Dialog)
    {
        if (Admin_Dialog->objectName().isEmpty())
            Admin_Dialog->setObjectName(QStringLiteral("Admin_Dialog"));
        Admin_Dialog->resize(756, 492);
        tabWidget = new QTabWidget(Admin_Dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 20, 691, 411));
        QFont font;
        font.setFamily(QStringLiteral("High Tower Text"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(40, 40));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_bienvenue_admin = new QLabel(tab);
        label_bienvenue_admin->setObjectName(QStringLiteral("label_bienvenue_admin"));
        label_bienvenue_admin->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_bienvenue_admin);

        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Data/Pictures/welcomeIcone.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_login = new QLabel(tab_2);
        label_login->setObjectName(QStringLiteral("label_login"));
        label_login->setGeometry(QRect(420, 120, 201, 201));
        QFont font1;
        font1.setStyleStrategy(QFont::PreferAntialias);
        label_login->setFont(font1);
        label_login->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(410, 20, 231, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("High Tower Text"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setWeight(50);
        label_2->setFont(font2);
        label_2->setTextFormat(Qt::AutoText);
        label_2->setScaledContents(true);
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 391, 311));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(layoutWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font3;
        font3.setFamily(QStringLiteral("High Tower Text"));
        font3.setPointSize(16);
        pushButton->setFont(font3);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font3);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        bguser = new QLabel(tab_2);
        bguser->setObjectName(QStringLiteral("bguser"));
        bguser->setGeometry(QRect(0, 0, 701, 461));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Data/Pictures/mangeUser.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(tab_2, icon1, QString());
        bguser->raise();
        label_login->raise();
        label_2->raise();
        layoutWidget->raise();
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
        QFont font4;
        font4.setFamily(QStringLiteral("Segoe UI Light"));
        font4.setPointSize(10);
        label_dbState->setFont(font4);
        bguser_2 = new QLabel(tab_4);
        bguser_2->setObjectName(QStringLiteral("bguser_2"));
        bguser_2->setGeometry(QRect(0, 0, 701, 461));
        layoutWidget_2 = new QWidget(tab_4);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(230, 140, 205, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gestionVol = new QPushButton(layoutWidget_2);
        gestionVol->setObjectName(QStringLiteral("gestionVol"));

        verticalLayout_2->addWidget(gestionVol);

        gestionVoyageur = new QPushButton(layoutWidget_2);
        gestionVoyageur->setObjectName(QStringLiteral("gestionVoyageur"));

        verticalLayout_2->addWidget(gestionVoyageur);

        tabWidget->addTab(tab_4, icon1, QString());
        bguser_2->raise();
        label_dbState->raise();
        layoutWidget_2->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 480, 104));
        bguser_3 = new QLabel(tab_3);
        bguser_3->setObjectName(QStringLiteral("bguser_3"));
        bguser_3->setGeometry(QRect(0, 0, 701, 461));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Data/Pictures/aboutIcone.png"), QSize(), QIcon::Normal, QIcon::On);
        tabWidget->addTab(tab_3, icon2, QString());
        bguser_3->raise();
        label->raise();
        label_background2 = new QLabel(Admin_Dialog);
        label_background2->setObjectName(QStringLiteral("label_background2"));
        label_background2->setGeometry(QRect(-6, 0, 971, 501));
        label_background2->setFont(font1);
        label_background2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox = new QGroupBox(Admin_Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 440, 701, 43));
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
        QFont font5;
        font5.setFamily(QStringLiteral("Comic Sans MS"));
        font5.setPointSize(12);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        label_time->setFont(font5);
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
        QFont font6;
        font6.setFamily(QStringLiteral("Comic Sans MS"));
        font6.setPointSize(12);
        label_date->setFont(font6);
        frame = new QFrame(Admin_Dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 741, 481));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_background2->raise();
        frame->raise();
        tabWidget->raise();
        groupBox->raise();

        retranslateUi(Admin_Dialog);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Admin_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Admin_Dialog)
    {
        Admin_Dialog->setWindowTitle(QApplication::translate("Admin_Dialog", "Application de gestion de r\303\251servation du vol", 0));
        label_bienvenue_admin->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Admin_Dialog", "Welcome", 0));
        label_login->setText(QString());
        label_2->setText(QApplication::translate("Admin_Dialog", "Click on \"Read\" to open the file,\n"
"or click on \"Write\" to modify it.\n"
"", 0));
        pushButton->setText(QApplication::translate("Admin_Dialog", "Write", 0));
        pushButton_2->setText(QApplication::translate("Admin_Dialog", "Read", 0));
        bguser->setText(QApplication::translate("Admin_Dialog", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Admin_Dialog", "Manage users", 0));
        label_dbState->setText(QApplication::translate("Admin_Dialog", "TextLabel", 0));
        bguser_2->setText(QApplication::translate("Admin_Dialog", "TextLabel", 0));
        gestionVol->setText(QApplication::translate("Admin_Dialog", "Flight management", 0));
        gestionVoyageur->setText(QApplication::translate("Admin_Dialog", "Traveler Management", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Admin_Dialog", "Manage reservations", 0));
        label->setText(QApplication::translate("Admin_Dialog", "Sujet 7 : Application de gestion de r\303\251servation du vol\n"
"L\342\200\231objectif est de d\303\251velopper une application graphique permettant de g\303\251rer les r\303\251servations des vols\n"
"au niveau d\342\200\231une agence de voyage. L\342\200\231utilisateur de cette application peut :\n"
"\357\202\267 Ajouter un vol (num\303\251ro vol, date et heure d\303\251part, date et heure d\342\200\231arriv\303\251e, A\303\251roport d\303\251part,\n"
"a\303\251roport d\342\200\231arriv\303\251e, num\303\251ro avion)\n"
"\357\202\267 Rechercher et consulter des vols existant par date d\303\251part, destination ..., etc.\n"
"\357\202\267 Ajouter un voyageur et lui r\303\251server un vol\n"
"\357\202\267 Il peut aussi modifier ou annuler un vol.", 0));
        bguser_3->setText(QApplication::translate("Admin_Dialog", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Admin_Dialog", "About", 0));
        label_background2->setText(QApplication::translate("Admin_Dialog", "TextLabel", 0));
        groupBox->setTitle(QString());
        label_time->setText(QApplication::translate("Admin_Dialog", "TextLabel", 0));
        label_date->setText(QApplication::translate("Admin_Dialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Admin_Dialog: public Ui_Admin_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_DIALOG_H
