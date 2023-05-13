//Anour Ibrahim
//aibrahim23
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>
#include "Name.h"
#include "ID.h"
#include "Final.h"
#include "FinalWithNumber.h"

using namespace std;

int main()
{
    vector<Final*> names; //vector to store the date
    
    //It stores a collection of key-value pairs where each key is unique
    unordered_map<string, int> uCount;
    
    //reads from the file StudentsLastFirst.txt
    ifstream inputFile("NamesLastFirst.txt");
    if (inputFile.is_open()) 
    {
        string line;
        while (getline(inputFile, line)) 
        {
            Name n(line); //creates a n object

            Final* x = nullptr;
            //constructs the username
            string username = n.getFirstName().substr(0, 1) + n.getLastName();
            //it used to find if a username alredy exists
            if (uCount.find(username) != uCount.end()) 
            {
                //calls the derived class when a username is similar
                x = new FinalWithNumber(n); 
            } 
            else 
            {
                //calls the parent class if the the usernames are unique
                x = new Final(n);
            }
            names.emplace_back(x); //x pointer to names, growing dynamically
            uCount[username]++;
        }
        inputFile.close();
    } 
    else 
    {
        //cerr is an output stream in C++ that is used for error messages.
        cerr << "File can not be read." << endl;
        return 1;
    }
    
    //outputs the contents of the file
    cout << "Here is the content in the file:\n";
    for (const auto y : names) 
    {
        cout << *y << "\n";
    }
    
    //the info gets outputted
    cout<<endl;
    cout<<"Here are the Info for the students:"<<endl;
    cout << "Name" << "\t\t\t" << "ID" << "\t\t\t" << "Username" << endl;
    cout<<endl;
    for (auto y : names) 
    {
        //points to the member functions
        cout << y->getName().getFirstName() <<" "<< y->getName().getLastName();
        cout << "\t\t" << "ID: " << y->getID().getId() << "\t\t";
        y->printUsername();
        cout << endl;
    }
    
    //delocates the memory
    for (const auto y : names) 
    {
        delete y;
    }

    return 0;
}
