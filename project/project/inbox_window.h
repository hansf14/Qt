#ifndef INBOX_WINDOW_H
#define INBOX_WINDOW_H
#include "login.h"
#include "compose.h"
#include "send_window.h"
#include "draft_window.h"
#include "trash_window.h"
#include <QMainWindow>

namespace Ui {
class inbox_window;
}
class login;
class send_window;
class draft_window;
class trash_window;
class inbox_window : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit inbox_window(QWidget *parent = 0);
    ~inbox_window();
    
private slots:
    void on_compose_pushButton_2_clicked();

    void on_sent_pushButton_2_clicked();

    void on_draft_pushButton_2_clicked();

    void on_trash_pushButton_2_clicked();

    void on_inbox_pushButton_2_clicked();

    void on_actionAbout_Us_triggered();

    void on_logout_pushButton2_clicked();

private:
    Ui::inbox_window *ui;
    login *log_in;
    compose *Compose;
    send_window *Sent;
    draft_window *Draft;
    trash_window *Trash;
};

#endif // INBOX_WINDOW_H
