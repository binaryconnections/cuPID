#ifndef ADMINUSER_H
#define ADMINUSER_H

#include "user.h"
#include "studentpreferredprofile.h"

class adminUser : public user
{
public:
    adminUser();
    studentPreferredProfile *getPrefProfile();

private:
    studentPreferredProfile *spp;

};

#endif // ADMINUSER_H
