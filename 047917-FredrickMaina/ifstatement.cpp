#include<iostream>
using namespace std;
int main() 
{
    int age;
    cout << "please enter the age: "<<endl;
    cin>>age;

    if(age>=4){
    cout<< "Admit to school "<<endl;
    }
    else {
        cout << "Declined! Minimum age not reached" <<endl;
    }
    //using tanary operator
    string message =(age >=4) ? "Admit to school." : "Decline! minimum age not reached";
    cout << message <<endl;
    return 0;
}