#ifndef DRAFT_WINDOW_H
#define DRAFT_WINDOW_H
#include "login.h"
#include "compose.h"
#include "send_window.h"
#include "inbox_window.h"
#include "trash_window.h"
#include <QMainWindow>

namespace Ui {
class draft_window;
}
class login;
class inbox_window;
class send_window;
class trash_window;
class draft_window : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit draft_window(QWidget *parent = 0);
    ~draft_window();

private slots:
    void on_compose_pushButton_3_clicked();

    void on_inbox_pushButton_3_clicked();

    void on_sent_pushButton_3_clicked();

    void on_trash_pushButton_3_clicked();

    void on_actionAbout_Us_triggered();

    void on_logout_pushButton3_clicked();

private:
    Ui::draft_window *ui;
    login *log_in;
    compose *Compose;
    send_window *Sent;
    inbox_window *Inbox;
    trash_window *Trash;
};

#endif // DRAFT_WINDOW_H
