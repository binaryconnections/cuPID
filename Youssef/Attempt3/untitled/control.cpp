#include "control.h"
#include "uicontrol.h"

control::control()
{
    uiControl *uic = new uiControl();
    uic->wp->show();    // welcome page
    uic->sp->hide();
}

control::~control()
{

}


