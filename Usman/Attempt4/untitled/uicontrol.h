#ifndef UICONTROL_H
#define UICONTROL_H
#include <QWidget>

#include "adminpage.h"
#include "createprofilepage.h"
#include "loginpage.h"
#include "studentpage.h"
#include "welcomepage.h"

class uiControl
{
public:
    uiControl();

   // QWidget *parent;

    //uiControl   *uic;
    welcomePage *wp;
    loginPage   *lp;
    studentPage *sp;
    adminPage   *ap;

};

#endif // UICONTROL_H
