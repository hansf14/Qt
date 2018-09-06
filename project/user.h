#ifndef USER_H
#define USER_H

#include <QString>


class User
{
public:
    QString name;
    QString password;
    QString email;
    QString phone_num;

    User();
    virtual ~User();

    void set(QString username, QString pwd, QString email_addr = QString(), QString phone_number = QString());
};

#endif // USER_H
