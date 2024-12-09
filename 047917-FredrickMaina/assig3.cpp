#include <iostream>
using namespace std;
int main()
{
    string studentname,intrest;
    int age;
    cout << "Please enter your child's name." <<endl;
    getline(cin,studentname);
    cout << "Please enter you your child's age." << endl;
    cin >> age;
   
    
    if(age>=4 && age <=10)
    {
        cout << "Enter your child's intrest.(soccer,Art,music,athletics,toys or others)" << endl;
        cin >>intrest;
        if(intrest == "soccer") 
        {
            cout << studentname << " has been admited to the soccer play group." <<endl;
        }
          if(intrest == "art") 
        {
            cout << studentname << " has been admited to the art play group." <<endl;
        }
          if(intrest == "music") 
        {
            cout << studentname << " has been admited to the music play group." <<endl;
        }
          if(intrest == "athletics") 
        {
            cout << studentname << " has been admited to the athletics play group." <<endl;
        }
          if(intrest == "toys") 
        {
            cout << studentname << " has been admited to Toys play group." <<endl;
        }
        else
        {
            cout << studentname << " has been adminted to others play group.";
        }
    }   
    else 
    {
        cout << "Childs age is invalid."<< endl;
    }  
return 0; 
}