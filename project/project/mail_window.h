#ifndef MAIL_WINDOW_H
#define MAIL_WINDOW_H
#include "login.h"
#include "compose.h"
#include "inbox_window.h"
#include "send_window.h"
#include "draft_window.h"
#include "trash_window.h"
#include <QMainWindow>

namespace Ui {
class mail_window;
}
class login;
class mail_window : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit mail_window(QWidget *parent = 0);
    ~mail_window();
    
private slots:
    void on_compose_pushButton_clicked();

    void on_sent_pushButton_clicked();

    void on_draft_pushButton_clicked();

    void on_trash_pushButton_clicked();

    void on_inbox_pushButton_clicked();

    void on_actionAbout_Us_triggered();

    void on_logout_pushButton_clicked();

private:
    Ui::mail_window *ui;
    login *log_in;
    compose *Compose;
    inbox_window *Inbox;
    send_window *Sent;
    draft_window *Draft;
    trash_window *Trash;
};

#endif // MAIL_WINDOW_H
