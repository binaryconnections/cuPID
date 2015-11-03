#include "uicontrol.h"

uiControl::uiControl()
{
    wp = new welcomePage();
    lp = new loginPage();
    ap = new adminPage();
    sp = new studentPage();
}
