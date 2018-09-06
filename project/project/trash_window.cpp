#include "trash_window.h"
#include "ui_trash_window.h"
#include "login.h"
#include "compose.h"
#include "send_window.h"
#include "draft_window.h"
#include "inbox_window.h"
#include <QMessageBox>

trash_window::trash_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::trash_window)
{
    ui->setupUi(this);
}

trash_window::~trash_window()
{
    delete ui;
}

void trash_window::on_compose_pushButton_4_clicked()
{
    Compose = new compose(this);
    Compose->show();
}

void trash_window::on_inbox_pushButton_4_clicked()
{
    hide();
    Inbox = new inbox_window(this);
    Inbox->show();
}

void trash_window::on_sent_pushButton_4_clicked()
{
    hide();
    Sent = new send_window(this);
    Sent->show();
}

void trash_window::on_draft_pushButton_4_clicked()
{
    hide();
    Draft = new draft_window(this);
    Draft->show();
}

void trash_window::on_actionAbout_Ud_triggered()
{
    QMessageBox::information(this,"About Us","We are Beijing Institute of Techonlogy student. \n We are majoring in Software Engineering.");
}

void trash_window::on_logout_pushButton4_clicked()
{
    QMessageBox::information(this,"Logout","Logout Success");
    this->close();
    log_in = new login();
    log_in->show();
}
