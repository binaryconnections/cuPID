#ifndef STUDENTUSER_H
#define STUDENTUSER_H
#include <QWidget>

#include "user.h"
#include "studentprofile.h"
#include "studentpreferredprofile.h"
#include "studentpage.h"

class studentPage;

class studentUser : public user
{
public:
    studentUser();

    studentProfile          *getOwnProfile();
    studentPreferredProfile *getPrefProfile();
    studentPage             *getstudentPage();
    storageControl          *stCtrl;


private:
    studentProfile          *myProfile;
    studentPreferredProfile *prefProfile;
    studentPage             *sp;


};

#endif // STUDENTUSER_H
