#ifndef USER_H
#define USER_H
#include <QTextStream>

class user
{

private:
    QString username;
    QString password;
    QString role;

public:
    user();
    ~user();

    void set_username(QString user);
    void set_password(QString pass);
    void set_role(QString role);

    QString get_username();
    QString get_password();
    QString get_role();

    bool operator==(user u);

};

#endif // USER_H
