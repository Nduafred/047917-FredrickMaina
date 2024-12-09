#include <iostream>
using namespace std;

int main()
{
    //declare string variables
    string myName, description;

    //prompt user for their full name
    cout <<"Please enter your full name:";
    getline(cin,myName);
    //prompt user for their description
    cout <<"Please enter your Description:";
    getline(cin,description); 

    cout <<"Your Name is: " <<myName <<endl;
    cout << "You said the following about yourself: " << description <<endl;

}