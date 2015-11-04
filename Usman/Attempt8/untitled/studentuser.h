#ifndef STUDENTUSER_H
#define STUDENTUSER_H
#include <QWidget>

#include "user.h"
#include "studentprofile.h"
#include "studentpreferredprofile.h"

class studentUser : public user
{
public:
    studentUser(string s);

    studentProfile          *getOwnProfile();
    studentPreferredProfile *getPrefProfile();


private:
    studentProfile          *myProfile;
    studentPreferredProfile *prefProfile;


};

#endif // STUDENTUSER_H
