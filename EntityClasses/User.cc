#include "User.h"
#include <iostream>

using namespace std;

// constructor
User::user(String fn, String ln): fname("new"), lname("user"), uID(1000)
{
   user = new user(fn, ln);

}


// destructor 
User::~user()
{

}

// getters
User::getFname()
{
   return fname;
}

User::getLname()
{
   return lname; 
}

// setters
User::setFname(String fn)
{
   fname = fn;
}

User::setLname(String ln)
{
   lname = ln;
}
