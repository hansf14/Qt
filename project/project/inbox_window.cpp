#include "inbox_window.h"
#include "login.h"
#include "ui_inbox_window.h"
#include "compose.h"
#include "send_window.h"
#include "draft_window.h"
#include "trash_window.h"
#include <QMessageBox>

inbox_window::inbox_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::inbox_window)
{
    ui->setupUi(this);
}

inbox_window::~inbox_window()
{
    delete ui;
}

void inbox_window::on_compose_pushButton_2_clicked()
{
    Compose = new compose(this);
    Compose->show();
}

void inbox_window::on_sent_pushButton_2_clicked()
{
    hide();
    Sent = new send_window(this);
    Sent->show();
}

void inbox_window::on_draft_pushButton_2_clicked()
{
    hide();
    Draft = new draft_window(this);
    Draft->show();
}

void inbox_window::on_trash_pushButton_2_clicked()
{
    hide();
    Trash = new trash_window(this);
    Trash->show();
}

void inbox_window::on_actionAbout_Us_triggered()
{
    QMessageBox::information(this,"About Us","We are Beijing Institute of Techonlogy student. \n We are majoring in Software Engineering.");
}

void inbox_window::on_logout_pushButton2_clicked()
{
    QMessageBox::information(this,"Logout","Logout Success");
    this->close();
    log_in = new login();
    log_in->show();
}
