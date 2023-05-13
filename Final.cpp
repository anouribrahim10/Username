//Anour Ibrahim
//aibrahim23
#include <iostream>
#include <string>
#include <vector>
#include "Final.h"
#include "Name.h"
#include "ID.h"

using namespace std;

//constructor that gets the entire name
Final::Final(const Name& name)
{
    this->name = name;
}

//sets the data to value
Final::Final(const string& value)
{
    data = value;
}

//gets the username
string Final::getUsername() const
{
    return getName().getFirstName().substr(0, 1) + getName().getLastName();
}

//outputs the username
void Final::printUsername() const
{
    cout << getUsername() << endl;
}

//gets name
Name Final::getName() const
{
    return name;
}

//gets id
ID Final::getID()
{
    return id;
}

//insertion operator 
ostream& operator<<(ostream& os, const Final& obj)
{
    os << obj.getName().getLastName() << ", " << obj.getName().getFirstName();
    return os;
}

//extraction operator
istream& operator>>(istream& is, Final& obj)
{
    string line;
    getline(is, line);
    obj.name = Name(line); 
    return is;
}
