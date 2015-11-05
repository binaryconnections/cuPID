#include "storage.h"


storage::storage()
{
}

// create admin in storage
void storage::createAdmin(string ad){
      ofstream myfile;
      myfile.open (string("save/Admins/" + ad + ".txt").c_str(),std::ios_base::app);
      myfile.close();
}

// create student in storage
void storage::createStudent(string st){
      ofstream myfile;
      myfile.open (string("save/Students/" + st + ".txt").c_str(),std::ios_base::app);
      myfile.close();
}

// create project in storage
void storage::createProject(string pr){
      ofstream myfile;
      myfile.open (string("save/Projects/" + pr + ".txt").c_str(),std::ios_base::app);
      myfile.close();
}

// check if admin exists given the username
bool storage::isAdmin(string x){
     ifstream ifile(string("save/Admins/" + x + ".txt").c_str());
        return ifile;
 }

// check if student exists given the username
bool storage::isStudent(string x){
    ifstream ifile(string("save/Students/" + x + ".txt").c_str());
        return ifile;
}

// check if project i
bool storage::isProject(string x){
    ifstream ifile(string("save/Projects/" + x + ".txt").c_str());
        return ifile;
}

void storage::attrAdmin(string ad, string attr){
      ofstream myfile;
      if(isAdmin(ad)){
      myfile.open (string("save/Admins/" + ad + ".txt").c_str(),std::ios_base::app);
      myfile << attr;
      myfile.close();
      }
}

void storage::attrStudent(string st, string attr){
      ofstream myfile;
      if(isStudent(st)){
      myfile.open (string("save/Admins/" + st + ".txt").c_str(),std::ios_base::app);
      myfile << attr;
      myfile.close();
      }
}



