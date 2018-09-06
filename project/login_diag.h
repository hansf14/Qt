#ifndef LOGIN_DIAG_H
#define LOGIN_DIAG_H

#include <QDialog>
#include <QMessageBox>

#include "signup_diag.h"
#include "mailbox_window.h"
#include "user.h"

namespace Ui {
class login_diag;
}

class login_diag : public QDialog
{
    Q_OBJECT
    
public:
    explicit login_diag(QWidget *parent = 0);
    ~login_diag();
    
private slots:
    void on_create_pushButton_clicked();

    void on_login_pushButton_clicked();

private:
    Ui::login_diag *ui;
    signup_diag *Signup_Diag;
    mailbox_window *Mailbox_Window;
};

#endif // LOGIN_DIAG_H
