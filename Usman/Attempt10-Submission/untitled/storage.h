#ifndef STORAGE_H
#define STORAGE_H

#include <string>
#include <fstream>

using namespace std;

class storage
{
public:
    storage();

    void createAdmin  (string ad);
    void createStudent(string st);
    void createProject(string cp);

    bool isAdmin  (string x);
    bool isStudent(string x);
    bool isProject(string x);

    void attrAdmin  (string ad, string attr);
    void attrStudent(string st, string attr);

};

#endif // STORAGE_H
