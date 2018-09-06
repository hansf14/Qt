#ifndef TRASH_WINDOW_H
#define TRASH_WINDOW_H
#include "login.h"
#include "compose.h"
#include "send_window.h"
#include "draft_window.h"
#include "inbox_window.h"
#include <QMainWindow>

namespace Ui {
class trash_window;
}
class login;
class inbox_window;
class send_window;
class draft_window;
class trash_window : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit trash_window(QWidget *parent = 0);
    ~trash_window();

private slots:
    void on_compose_pushButton_4_clicked();

    void on_inbox_pushButton_4_clicked();

    void on_sent_pushButton_4_clicked();

    void on_draft_pushButton_4_clicked();

    void on_actionAbout_Ud_triggered();

    void on_logout_pushButton4_clicked();

private:
    Ui::trash_window *ui;
    login *log_in;
    compose *Compose;
    send_window *Sent;
    draft_window *Draft;
    inbox_window *Inbox;
};

#endif // TRASH_WINDOW_H
