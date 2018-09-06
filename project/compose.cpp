#include "compose.h"
#include "ui_compose.h"

compose::compose(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::compose)
{
    ui->setupUi(this);
}

compose::~compose()
{
    delete ui;
}

void compose::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void compose::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void compose::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void compose::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void compose::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void compose::on_actionFont_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if (ok){
        ui->textEdit->setFont(font);

    }
    else return;
}

void compose::on_actionFont_Color_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white, this, "Choose Color");
    if (color.isValid())
    {
        ui->textEdit->setTextColor(color);
    }
}

void compose::on_actionText_Highlight_COlor_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white, this, "Choose Color");
    if (color.isValid())
    {
        ui->textEdit->setTextBackgroundColor(color);
    }
}

void compose::on_actionAbout_Us_triggered()
{
    QMessageBox message_box;
    message_box.setText("We are Beijing Institute of Techonlogy student. \n We are majoring in Software Engineering.");
}

void compose::on_actionAttach_triggered()
{
    QStringList filename = QFileDialog::getOpenFileNames(this, tr("Open File"), ("C://"),
                                                    "All Files (*.*);;Text File (*.txt);;Music Files (*.mp3)");
}
