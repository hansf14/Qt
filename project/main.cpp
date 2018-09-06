#include <QApplication>
#include "login_diag.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login_diag w;
    w.show();
    
    return a.exec();
}
