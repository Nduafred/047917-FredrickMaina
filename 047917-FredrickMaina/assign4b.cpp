#include <iostream>
using namespace std;
int main()
{
int num1,num2,choice;
cout << "Kay Restaraunt Kenya" << endl;
cout << "____________________" << endl;
cout << "1.Ugali Chicken dry or wet fry     -450/=" << endl;
cout << "2.Matoke served with meat          -600/=" << endl;
cout << "3.Omena served with ugali          -300/=" << endl; 
cout << "4.Ugali whole fish wet or dry fry  -500/=" << endl;
cout << "Please select food of choice(eg . 1.2.3.4)" <<endl;
cin >>choice;
switch (choice)
{
case 1:
    cout <<"Your order is:"<<endl;
    cout <<"Ugali Chicken dry or wet fry"<<endl;
    cout <<"Your total amount is: 450/= Ksh"<<endl;
    cout <<"Thankyou for eating with us."<<endl;
   
    break;
case 2:
    cout <<"Your order is:"<<endl;
    cout <<"Matoke served with meat"<<endl;
    cout <<"Your total amount is: 600/= Ksh"<<endl;
    cout <<"Thankyou for eating with us."<<endl;
    break;
case 3:
    cout <<"Your order is:"<<endl;
    cout <<"Omena served with ugali "<<endl;
    cout <<"Your total amount is: 300/= Ksh"<<endl;
    cout <<"Thankyou for eating with us."<<endl;
    break;
case 4:
    cout <<"Your order is:"<<endl;
    cout <<"Ugali whole fish wet or dry fry "<<endl;
    cout <<"Your total amount is: 500/= Ksh"<<endl;
    cout <<"Thankyou for eating with us."<<endl;
    break;    
}
return 0;
}