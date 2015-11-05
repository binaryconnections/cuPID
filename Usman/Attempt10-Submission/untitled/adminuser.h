#ifndef ADMINUSER_H
#define ADMINUSER_H


#include "storagecontrol.h"
#include "user.h"
#include "studentpreferredprofile.h"
#include "adminpage.h"
#include "projects.h"

class adminPage;

class adminUser : public user
{
public:
    adminUser();
    studentPreferredProfile *getPrefProfile();
    adminPage               *getadminPage();
    storageControl          *stCtrl;

private:
    studentPreferredProfile *spp;
    adminPage               *ap;
    projects                *pro;

};

#endif // ADMINUSER_H
