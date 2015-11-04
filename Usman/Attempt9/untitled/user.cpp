#include "user.h"

user::user()
{
}

string user::getUsername()
{
    return username;
}

void user::setUsername(string s)
{
    username = s;
}
