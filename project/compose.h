#ifndef COMPOSE_H
#define COMPOSE_H

#include <QFontDialog>
#include <QFont>
#include <QColorDialog>
#include <QColor>
#include <QMessageBox>
#include <QFileDialog>
#include <QMainWindow>

namespace Ui {
class compose;
}

class compose : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit compose(QWidget *parent = 0);
    ~compose();
    
private slots:
    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionRedo_triggered();

    void on_actionUndo_triggered();

    void on_actionFont_triggered();

    void on_actionFont_Color_triggered();

    void on_actionText_Highlight_COlor_triggered();

    void on_actionAbout_Us_triggered();

    void on_actionAttach_triggered();

private:
    Ui::compose *ui;
};

#endif // COMPOSE_H
