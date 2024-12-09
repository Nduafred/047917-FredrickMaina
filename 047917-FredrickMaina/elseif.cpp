#include <iostream>
#include <string>
using namespace std;
int main()
{
    //declare necessary variables
    int age;
    string childname;
    cout << "please enter child's fullname " <<endl;
    //used to get all the names including the spaces.cin will terminate after a space is inserted
    getline(cin, childname);
    cout << "Please Enter Child's Age" <<endl;
    cin >>age;
     if(age>=7)
    {
        cout << childname <<" has been Admited to Grade School"<< endl;
     }
           
    else if(age >= 5) 
        {
            cout << childname << "has been Admited to Kindergarten ." <<endl;
        }
    else if(age >= 3) 
        {
            cout << childname << "has been Admited to Pre-school ." <<endl;
        }
    else if (age >= 1 )
        {
            cout << childname << "has been Admited to Play School." <<endl;
        }
    
    else 
         {
        cout << "Admission unsuccessful." << childname << " age is invalid";
         }
return 0;
}