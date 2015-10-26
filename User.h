#ifndef USER_H
#define USER_H


class User
{
   public:
   user(String, String);
   ~user();

   void setFname(String);
   void setLname(String);
   void getFname();
   void getLname();

   private:
   String fname;	// first name
   String lname;	// last name
   int    uID;		// user identifier


}

#endif
