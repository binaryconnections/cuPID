#ifndef USER_H
#define USER_H

#include <string>
#include <QString>

using namespace std;

class user
{
public:
    user();
    string getUsername();
    void   setUsername(string s);

protected:
    string username;
};

#endif // USER_H
