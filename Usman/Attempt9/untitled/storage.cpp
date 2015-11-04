#include "storage.h"


storage::storage()
{

}

void storage::createAdmin(string ad){
      ofstream myfile;
      myfile.open (string("save/Admins/" + ad + ".txt").c_str(),std::ios_base::app);
      myfile << "Writing this to a file again.\n";
      myfile.close();
}

void storage::createStudent(string st){
      ofstream myfile;
      myfile.open (string("save/Students/" + st + ".txt").c_str(),std::ios_base::app);
      myfile << "Writing this to a file.\n";
      myfile.close();
}

void storage::createProject(string pr){
      ofstream myfile;
      myfile.open (string("save/Projects/" + pr + ".txt").c_str(),std::ios_base::app);
      myfile << "Writing this to a file.\n";
      myfile.close();
}

bool storage::isAdmin(string x){
     ifstream ifile(string("save/Admins/" + x + ".txt").c_str());
       return ifile;
 }

bool storage::isStudent(string x){
    ifstream ifile(string("save/Students/" + x + ".txt").c_str());
      return ifile;
}

bool storage::isProject(string x){
    ifstream ifile(string("save/Projects/" + x + ".txt").c_str());
      return ifile;
}



