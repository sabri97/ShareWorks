#include "user.h"
#include <QTextStream>

user::user()
{
    username ="";
    password = "" ;
    role = "" ;
}

user::~user(){}

void user::set_username(QString user)
{
    (*this).username=user;
}

void user::set_password(QString pass)
{
    (*this).password=pass;
}

void user::set_role(QString role)
{
    (*this).role=role;
}

QString user::get_username()
{
    return (*this).username;
}

QString user::get_password()
{
    return (*this).password;
}

QString user::get_role()
{
    return (*this).role;
}

bool user::operator==(user u)
{
    if ((*this).username == u.username && (*this).password == u.password && (*this).role == u.role)
        return true;
    else
        return false;
}

