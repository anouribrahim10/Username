//Anour Ibrahim
//aibrahim23
#ifndef FINAL_H
#define FINAL_H

#include <string>
#include <vector>
#include <fstream>
#include "Name.h"
#include "ID.h"
#include <queue>

using namespace std;

class Final
{
public:
    //gets the name
    Name getName() const; 
    //gets the id
    ID getID(); 
    //a constructor takes in the entire name
    Final(const Name& name); 
    Final(const string& value = "");
    //virtual function to get the username if the usernames are unique
    virtual string getUsername() const;
    //prints the username
    virtual void printUsername() const;
    //insertion operator 
    friend ostream& operator<<(ostream& os, const Final& obj);
    //extraction operator
    friend istream& operator>>(istream& is, Final& obj);
    

private:
    //private data mems
    ID id;
    Name name;
    string data;
};

#endif
