#include "user.h"

User::User()
{}

User::~User()
{}

void User::set(QString username, QString pwd, QString email_addr, QString phone_number)
{
    name = username;
    password = pwd;
    email = email_addr;
    phone_num = phone_number;
}
