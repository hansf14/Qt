#include "signup_diag.h"
#include "ui_signup_diag.h"

signup_diag::signup_diag(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup_diag)
{
    ui->setupUi(this);
}

signup_diag::~signup_diag()
{
    delete ui;
}

void signup_diag::on_pushButton_2_clicked()
{
    close();
}

void signup_diag::on_pushButton_clicked()
{
    QString fullname = ui->name_lineEdit->text();
    QString email = ui->name_lineEdit->text();
    QString password = ui->password->text();
    QString confirm_pswd = ui->password_lineEdit->text();
    QString phone_number = ui->phone_lineEdit->text();


    /*
    if(!fullname && !pswd && !confirm_pswd && !phone_number)
    {
        QMessageBox::information(this,"SignUp","Fill all the ")
    }
    else
    {
        QMessageBox::information(this,"SignUp","Account created");
    }
    */
}
