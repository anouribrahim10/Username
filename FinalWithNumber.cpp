//Anour Ibrahim
//aibrahim23
#include <iostream>
#include "FinalWithNumber.h"
using namespace std;

//constructor
FinalWithNumber::FinalWithNumber(const Name& name) : Final(name) {}
//prints the username
void FinalWithNumber::printUsername() const
{
    cout << getUsernameWithNumber() << endl;
}

//gets the username and adds a number to the username when they are identical
string FinalWithNumber::getUsernameWithNumber() const
{
    static int count = 1;
    string username = getUsername();
    return username + to_string(count++);
}

