#include "login_diag.h"
#include "ui_login_diag.h"
#include "signup_diag.h"
#include "mailbox_window.h"

//TODO : Subclassing Longin UI add User

login_diag::login_diag(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login_diag)
{
    ui->setupUi(this);
}

login_diag::~login_diag()
{
    delete ui;
}

void login_diag::on_create_pushButton_clicked()
{
    //Open up the Sign-up window in modaless (lock the window)
    Signup_Diag = new signup_diag(this);
    Signup_Diag->show();
}

void login_diag::on_login_pushButton_clicked()
{
    QString username = ui->usrnm_lineEdit->text();
    QString password = ui->pswd_lineEdit->text();

    //TODO
    //search userdata from DB and compare
    if(username == "admin" && password == "123") //Log-In successful
    {
        QMessageBox::information(this,"LogIn","Log-In succesfull!");
        hide(); //Close the log-in window

        //Open the mail window
        Mailbox_Window = new mailbox_window(this);
        Mailbox_Window->show();
    }
    else
    {
        QMessageBox::information(this,"LogIn","Username or password is not correct!");
    }
}
