#include "send_window.h"
#include "ui_send_window.h"
#include "login.h"
#include "compose.h"
#include "draft_window.h"
#include "trash_window.h"
#include <QMessageBox>

send_window::send_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::send_window)
{
    ui->setupUi(this);
}

send_window::~send_window()
{
    delete ui;
}

void send_window::on_compose_pushButton_clicked()
{
    Compose = new compose(this);
    Compose->show();
}

void send_window::on_draft_pushButton_clicked()
{
    hide();
    Draft = new draft_window(this);
    Draft->show();
}

void send_window::on_trash_pushButton_clicked()
{
    hide();
    Trash = new trash_window(this);
    Trash->show();
}


void send_window::on_inbox_pushButton_clicked()
{
    hide();
    Inbox = new inbox_window(this);
    Inbox->show();
}

void send_window::on_actionAbout_Us_triggered()
{
    QMessageBox::information(this,"About Us","We are Beijing Institute of Techonlogy student. \n We are majoring in Software Engineering.");
}

void send_window::on_logout_pushButton5_clicked()
{
    QMessageBox::information(this,"Logout","Logout Success");
    this->close();
    log_in = new login();
    log_in->show();
}
