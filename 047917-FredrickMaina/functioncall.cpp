#include <iostream>
using namespace std;
int add(int a,int b);//function declaration
int main ()
{
    int result =add(5,3);//function call
    cout <<"the sum is:" <<result <<endl;
    return 0;
}
int add(int a,int b)//function definition
{
    return a+b;
}