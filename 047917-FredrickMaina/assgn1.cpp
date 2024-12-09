#include <iostream>
using namespace std;
int main ()
{
    int age,time,bal;
    string cusname,crb;
    
   
    //customer info 
    cout << "Enter Your Full names:" << endl;
    getline(cin,cusname);
    cout <<"How old are you"<<endl;
    cin >>age;

     if(age>=22)
    {
        cout <<"please enter bank balance "<< endl;
        cin >> bal;

    
        if(bal >=50000) //First nested if
        {
            cout << "Is your Crb status good or bad"<< endl;
            cin >>crb;
        }
        if(crb == "good") //second nested if
        {
            cout << "How many months have you been a customer" <<endl;
            cin >> time;

        }
        if(time >= 6)
        {
          cout <<cusname << " your loan has been aproved.";
        }
    else
     {
      cout << cusname<< " your loan has not been approved." <<endl;
     }
   
  return 0;
    }
}
