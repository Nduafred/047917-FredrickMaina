#include <iostream>
using namespace std;
int main()
{
    string studentname;
    int score;
    cout << "Please enter your name" <<endl;
    getline(cin,studentname);
    cout <<studentname << " please enter you score" << endl;
    cin >> score;
    
    if(score >=70 && score <=100)
    {
        cout <<studentname <<" Your grade is A. "<< endl;
    }
            
        else if(score >=60 && score <=69) 
        {
            cout << studentname << " your grade is B." <<endl;
        }
        else if(score >=50 && score <=59) //second nested if
        {
            cout << studentname << "your grade is C." <<endl;
        }
       else if(score >=40 && score <=49)
        {
            cout << studentname << " your grade is D." <<endl;
        }
        else if(score >=1 && score <=39)
        {
            cout <<studentname << " your grade is F."<< endl;
        }
        else
        {
      cout << "Invalid score";
        }
       
}