#include "mail_window.h"
#include "ui_mail_window.h"
#include "login.h"
#include "compose.h"
#include "inbox_window.h"
#include "send_window.h"
#include "draft_window.h"
#include "trash_window.h"
#include <QMessageBox>

mail_window::mail_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mail_window)
{
    ui->setupUi(this);
}

mail_window::~mail_window()
{
    delete ui;
}

void mail_window::on_compose_pushButton_clicked()
{
    Compose = new compose(this);
    Compose->show();
}

void mail_window::on_sent_pushButton_clicked()
{
    hide();
    Sent = new send_window(this);
    Sent->show();
}

void mail_window::on_draft_pushButton_clicked()
{
    hide();
    Draft = new draft_window(this);
    Draft->show();
}

void mail_window::on_trash_pushButton_clicked()
{
    hide();
    Trash = new trash_window(this);
    Trash->show();
}

void mail_window::on_inbox_pushButton_clicked()
{
    hide();
    Inbox = new inbox_window(this);
    Inbox->show();
}

void mail_window::on_actionAbout_Us_triggered()
{
    QMessageBox::information(this,"About Us","We are Beijing Institute of Techonlogy student. \n We are majoring in Software Engineering.");
}

void mail_window::on_logout_pushButton_clicked()
{
    QMessageBox::information(this,"Logout","Logout Success");
    this->close();
    log_in = new login();
    log_in->show();
}
