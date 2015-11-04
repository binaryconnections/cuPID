#include "student.h"

student::student()
{
}

studentProfile* student::getOwnProfile()
{
    return myProfile;
}

studentPreferredProfile* student::getPrefProfile()
{
    return prefProfile;
}
