#ifndef UICONTROL_H
#define UICONTROL_H
#include <QWidget>

#include "adminpage.h"
#include "createprofilepage.h"
#include "loginpage.h"
#include "studentpage.h"
#include "welcomepage.h"
#include "preferencepage.h"
#include "storage.h"

class uiControl
{
public:
    uiControl();

    welcomePage    *wp;
    loginPage      *lp;
    studentPage    *sp;
    adminPage      *ap;
    preferencePage *pp;
    storage        *store;



};

#endif // UICONTROL_H
