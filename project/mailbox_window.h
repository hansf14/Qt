#ifndef MAILBOX_WINDOW_H
#define MAILBOX_WINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "compose.h"

namespace Ui {
class mailbox_window;
}

class mailbox_window : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit mailbox_window(QWidget *parent = 0);
    ~mailbox_window();
    
private slots:
    void on_compose_pushButton_clicked();

    void on_sent_pushButton_clicked();

    void on_draft_pushButton_clicked();

    void on_trash_pushButton_clicked();

    void on_inbox_pushButton_clicked();

    void on_actionAbout_Us_triggered();

private:
    Ui::mailbox_window *ui;
    compose *Compose;
};

#endif // MAILBOX_WINDOW_H
