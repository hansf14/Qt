#ifndef SEND_WINDOW_H
#define SEND_WINDOW_H
#include "login.h"
#include "compose.h"
#include "draft_window.h"
#include "trash_window.h"
#include "inbox_window.h"
#include <QMainWindow>

namespace Ui {
class send_window;
}
class login;
class inbox_window;
class draft_window;
class trash_window;
class send_window : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit send_window(QWidget *parent = 0);
    ~send_window();
    
private slots:
    void on_draft_pushButton_clicked();

    void on_trash_pushButton_clicked();

    void on_compose_pushButton_clicked();

    void on_inbox_pushButton_clicked();

    void on_actionAbout_Us_triggered();

    void on_logout_pushButton5_clicked();

private:
    Ui::send_window *ui;
    login *log_in;
    compose *Compose;
    draft_window *Draft;
    trash_window *Trash;
    inbox_window *Inbox;
};

#endif // SEND_WINDOW_H
