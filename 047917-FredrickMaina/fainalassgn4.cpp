#include <iostream>
using namespace std;
int main()
{
int num1,num2,choice;
cout << "Enter first nunber" << endl;
cin >> num1;
cout << "enter second number" <<endl;
cin >> num2;
choice = (num1 > num2) ? 1 : (num1 < num2) ? 2 : 3;
switch (choice)
{
case 1:
    cout <<"First number is greater:"<< num1 <<endl;
    break;
case 2:
    cout <<"Second number is greater:"<< num2 <<endl;
    break;
case 3:
cout <<"Both number are equal"<< num1 <<endl;
}
return 0;
}