#include <iostream>
using namespace std;
int main()
{
    string studentname,course;
    int score;
    cout << "Please enter your name" <<endl;
    getline(cin,studentname);
    cout <<"enter your course" <<endl;
    cin >>course;
    cout <<studentname << " please enter you score" << endl;
    cin >> score;
    
    if(score >=70 && score <=100)
    {
        cout <<studentname <<" Your grade is A.In  "<<course << endl;
    }
            
        else if(score >=60 && score <=69) 
        {
            cout << studentname << " your grade is B.In" << course <<endl;
        }
        else if(score >=50 && score <=59)
        {
            cout << studentname << "your grade is C." <<course <<endl;
        }
       else if(score >=40 && score <=49)
        {
            cout << studentname << " your grade is D." <<course <<endl;
        }
        else if(score >=1 && score <=39)
        {
            cout <<studentname << " your grade is F."<<course << endl;
        }
        else
        {
      cout << "Invalid score";
        }
       
}