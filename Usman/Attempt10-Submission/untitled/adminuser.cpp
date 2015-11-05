#include "adminuser.h"

adminUser::adminUser()
{
    ap = new adminPage();
}

adminPage* adminUser::getadminPage()
{
    return ap;
}
