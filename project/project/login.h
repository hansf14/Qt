#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "signup.h"
#include "mail_window.h"
#include "mail_dialog.h"

namespace Ui {
class login;
}
class mail_window;
class login : public MailDialog
{
    Q_OBJECT
    
public:
    //TODO
    User user;

    explicit login(QWidget *parent = 0);
    ~login();
    
private slots:
    void on_create_pushButton_clicked();

    void on_login_pushButton_clicked();

private:
    Ui::login *ui;
    signup *SignUp;
    mail_window *Mail_Window;
};

#endif // LOGIN_H
