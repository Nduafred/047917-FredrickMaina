#include <iostream>
using namespace std;

int main()
{
    //declare string variables
    string fname,lname,meal,movie;

    //prompt user for their names
    cout <<"Please enter your first name:";
    getline(cin,fname);
    cout <<"Please enter your Last name:";
    getline(cin,lname);
    //prompt user for their meal
    cout <<"Please enter your Favourite Meal:";
    getline(cin,meal); 
    //prompt user for their Movie
    cout <<"Please enter your Favourite movie:";
    getline(cin,movie); 



    cout <<"Your First Name is: " <<fname <<endl;
    cout <<"Your Last Name is: " <<lname <<endl;
    cout <<"Your Full Name is: " <<fname <<" "<<lname <<endl;
    cout << "You said the Favvourite meal is: " <<meal<<endl;
    cout << "You said the Favvourite movie is: " <<movie<<endl;

}