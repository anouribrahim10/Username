//Anour Ibrahim
//aibrahim23
#ifndef FINALWITHNUMBER_H
#define FINALWITHNUMBER_H

#include "Final.h"

//derived class
class FinalWithNumber : public Final
{
public:
    //constructor for the username
    FinalWithNumber(const Name& name);
    
    //prints the username
    void printUsername() const override;

private:
    
    string getUsernameWithNumber() const;
};

#endif

