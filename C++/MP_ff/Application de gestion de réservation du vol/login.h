#ifndef LOGIN_H
#define LOGIN_H

#include<QtSql>
#include<QtDebug>
#include<QFileInfo>

class LogIn
{
public:

    QSqlDatabase DataBase;
    LogIn();

    void  ConnClose()
    {
       DataBase.close();
       DataBase.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool  ConnOpen()
    {
            QSqlDatabase DataBase = QSqlDatabase::addDatabase("QSQLITE");
            DataBase.setDatabaseName("./Data/DataBase/GestionVol.db");

            if(!DataBase.open())
            {
                qDebug()<< ("Failer connection");
                return false;
            }
            else
            {
                qDebug()<< ("Connected.....");
                return true;
            }
    }

};

#endif // LOGIN_H
