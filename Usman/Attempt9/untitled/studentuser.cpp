#include "studentuser.h"


studentUser::studentUser()
{
    sp = new studentPage();
}

studentProfile* studentUser::getOwnProfile()
{
    return myProfile;
}

studentPreferredProfile* studentUser::getPrefProfile()
{
    return prefProfile;
}

studentPage* studentUser::getstudentPage()
{
    return sp;
}
