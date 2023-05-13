//Anour Ibrahim
//aibrahim23
#ifndef NAME_H
#define NAME_H
using namespace std;
//defines the class
class Name
{
    public:
//gets the first name	    
    string getFirstName();
    //gets the last name
    string getLastName();
    
    
    //prints first and last name
    void printName();
    //default constructor
    Name();
    //constructor
    Name(string wholeline);
    
    private:
    string fname, lname;
  
    
};

#endif
