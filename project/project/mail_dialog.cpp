#include "mail_dialog.h"

MailDialog::MailDialog(QWidget *parent) :
    QDialog(parent)
{

}

MailDialog::~MailDialog()
{

}

void MailDialog::setUser(QString username, QString pwd, QString email_addr, QString phone_number)
{
    setUser(username, pwd, email_addr, phone_number);
}
