#include "draft_window.h"
#include "ui_draft_window.h"
#include "login.h"
#include "compose.h"
#include "send_window.h"
#include "inbox_window.h"
#include "trash_window.h"
#include <QMessageBox>

draft_window::draft_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::draft_window)
{
    ui->setupUi(this);
}

draft_window::~draft_window()
{
    delete ui;
}

void draft_window::on_compose_pushButton_3_clicked()
{
        Compose = new compose(this);
        Compose->show();
}

void draft_window::on_inbox_pushButton_3_clicked()
{
    hide();
    Inbox = new inbox_window(this);
    Inbox->show();
}

void draft_window::on_sent_pushButton_3_clicked()
{
    hide();
    Sent = new send_window(this);
    Sent->show();
}

void draft_window::on_trash_pushButton_3_clicked()
{
    hide();
    Trash = new trash_window(this);
    Trash->show();
}

void draft_window::on_actionAbout_Us_triggered()
{
    QMessageBox::information(this,"About Us","We are Beijing Institute of Techonlogy student. \n We are majoring in Software Engineering.");
}

void draft_window::on_logout_pushButton3_clicked()
{
    QMessageBox::information(this,"Logout","Logout Success");
    this->close();
    log_in = new login();
    log_in->show();
}
