//Anour Ibrahim
//aibrahim23
#include <iostream>
#include <string>
#include "ID.h"
#include <string>
using namespace std;

//default constructor
ID::ID()
{
    //static increases by 1
    static int currentNumber=10000000;
    ID_number= currentNumber;//assigns it to the private num
    
    full_ID="A"+to_string(currentNumber);
    currentNumber++;

   
}
//the getter function
string ID::getId()
{
    return full_ID;
}
