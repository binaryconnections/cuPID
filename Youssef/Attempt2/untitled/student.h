#ifndef STUDENT_H
#define STUDENT_H

#include "studentProfile.h"
#include "studentPreferredProfile.h"
#include "user.h"

class student : public user
{
public:
    student();

    studentProfile*          getOwnProfile();
    studentPreferredProfile* getPrefProfile();

private:
    studentProfile*          myProfile;
    studentPreferredProfile* prefProfile;

};

#endif // STUDENT_H
