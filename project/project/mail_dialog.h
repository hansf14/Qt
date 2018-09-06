#ifndef MAIL_DIALOG_H
#define MAIL_DIALOG_H

#include <QDialog>
#include "user.h"

//Subclassing QDialog
class MailDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MailDialog(QWidget *parent = 0);
    virtual ~MailDialog();

    void setUser(QString username, QString pwd, QString email_addr = QString(), QString phone_number = QString());

protected:
    User user;
};


#endif // MAIL_DIALOG_H
