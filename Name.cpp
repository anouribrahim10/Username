//Anour Ibrahim
//aibrahim23
#include <iostream>
#include <string>
#include "Name.h"

using namespace std;

// Default constructor
Name::Name()
{
    fname = "First";
    lname = "Last";
}

// Constructor
Name::Name(string wholeline)
{
    int pos = wholeline.find(',');
    lname = wholeline.substr(0, pos);

    // Remove leading and trailing whitespace from the last name
    size_t start = lname.find_first_not_of(' ');
    size_t end = lname.find_last_not_of(' ');
    if (start != string::npos && end != string::npos)
        lname = lname.substr(start, end - start + 1);

    // Get the substring after the comma
    fname = wholeline.substr(pos + 1);

    // Remove leading and trailing whitespace from the first name
    start = fname.find_first_not_of(' ');
    end = fname.find_last_not_of(' ');
    if (start != string::npos && end != string::npos)
        fname = fname.substr(start, end - start + 1);
}

// Gets the first name
string Name::getFirstName()
{
    return fname;
}

// Gets the last name
string Name::getLastName()
{
    return lname;
}

// Prints first and last name
void Name::printName()
{
    cout << fname << " " << lname << endl;
}
