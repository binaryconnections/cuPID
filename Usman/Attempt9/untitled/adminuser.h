#ifndef ADMINUSER_H
#define ADMINUSER_H

#include "user.h"
#include "studentpreferredprofile.h"
#include "adminpage.h"

class adminPage;

class adminUser : public user
{
public:
    adminUser();
    studentPreferredProfile *getPrefProfile();
    adminPage               *getadminPage();

private:
    studentPreferredProfile *spp;
    adminPage               *ap;

};

#endif // ADMINUSER_H
