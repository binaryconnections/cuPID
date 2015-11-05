#ifndef PROJECTS_H
#define PROJECTS_H

#include <string>
#include "storagecontrol.h"

using namespace std;

class projects
{
public:
    projects();
    // getters
    string getName();
    int    getCapacity();
    int    getAmount();
    // setters
    void    setName(string );
    void    setCapacity(int );

    storageControl  *stCtrl;

private:
    string  name;
    int     capacity;   // max # of people project can have
    int     amount;     // # of people registered
};

#endif // PROJECTS_H
