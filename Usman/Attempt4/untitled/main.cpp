#include "uicontrol.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

 //   welcomePage *wp = new welcomePage();
 //   wp->show();

    uiControl *uic = new uiControl();
    uic->wp->show();    // welcome page
    //uic->ap->show();
    //uic->sp->show();


    return a.exec();
}
