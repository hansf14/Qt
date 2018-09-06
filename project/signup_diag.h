#ifndef SIGNUP_DIAG_H
#define SIGNUP_DIAG_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class signup_diag;
}

class signup_diag : public QDialog
{
    Q_OBJECT
    
public:
    explicit signup_diag(QWidget *parent = 0);
    ~signup_diag();
    
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::signup_diag *ui;
};

#endif // SIGNUP_DIAG_H
