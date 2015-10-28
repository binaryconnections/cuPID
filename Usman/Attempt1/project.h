#ifndef PROJECT_H
#define PROJECT_H

#include <string.h>
#include <iostream>

using namespace std;
class Project
{
public:
    Project();
    string pname;

private:
    int max_capacity;   // total number of students that can register
    int count;          // number of studentes registered

};

#endif // PROJECT_H
