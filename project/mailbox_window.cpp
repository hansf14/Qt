#include "mailbox_window.h"
#include "ui_mailbox_window.h"
#include "compose.h"

mailbox_window::mailbox_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mailbox_window)
{
    ui->setupUi(this);
}

mailbox_window::~mailbox_window()
{
    delete ui;
}

void mailbox_window::on_compose_pushButton_clicked()
{
    Compose = new compose(this);
    Compose->show();
}

void mailbox_window::on_sent_pushButton_clicked()
{
//    hide();
//    Sent = new send_window(this);
//    Sent->show();
}

void mailbox_window::on_draft_pushButton_clicked()
{
//    hide();
//    Draft = new draft_window(this);
//    Draft->show();
}

void mailbox_window::on_trash_pushButton_clicked()
{
//    hide();
//    Trash = new trash_window(this);
//    Trash->show();
}

void mailbox_window::on_inbox_pushButton_clicked()
{
//    hide();
//    Inbox = new inbox_window(this);
//    Inbox->show();
}

void mailbox_window::on_actionAbout_Us_triggered()
{
    QMessageBox message_box;
    message_box.setText("We are Beijing Institute of Techonlogy student. \n We are majoring in Software Engineering.");
}
