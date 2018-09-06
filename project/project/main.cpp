#include <QApplication>
#include "login.h"
#include "mail_window.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login w;
    w.show();
    
    return a.exec();
}
