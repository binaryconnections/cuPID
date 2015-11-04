#include "uicontrol.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    uiControl *uic = new uiControl();
    uic->wp->show();    // welcome page

    //uic->sp->show();
    //uic->ap->show();


    return a.exec();
}
