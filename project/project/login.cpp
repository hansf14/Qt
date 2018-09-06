#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include "mail_window.h"

login::login(QWidget *parent) :
    MailDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_create_pushButton_clicked()
{
    SignUp = new signup(this);
    SignUp->show();
}

void login::on_login_pushButton_clicked()
{
    QString username = ui->usrnm_lineEdit->text();
    QString password = ui->pswd_lineEdit->text();

    if(username == "admin" && password == "123")
    {
        user.set(username, password);

        QMessageBox::information(this,"LogIn","LogIn succesfull!");
        hide();
        Mail_Window = new mail_window(this);
        Mail_Window->show();
    }
    else
    {
        QMessageBox::information(this,"LogIn","Username or password is not correct!");
    }
}
