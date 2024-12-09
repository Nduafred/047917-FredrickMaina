//Logical,Arithmetic and comparison operators
#include <iostream>
using namespace std;
int main()
{
    //Variable declarations
    int num1,num2;    //declare two integer variables
    bool boolvar1 = true, boolvar2 = false; //declare and initalize two bool variables
    //prompt user input and capture input
    cout <<"Enter first non-zero" << endl;
    cin >> num1;
    cout <<"Enter second non-zero" << endl;
    cin >> num2;
    //*** Arithmetic operators*/
    //additional operator '+'
    cout << "sum of" << num1 << "+" << num2 <<"=" << num1 + num2 << endl;
    //Subtraction operator '-'
    cout << "Difference of the two numbers" << num1 - num2 << endl;
    //Multiplication operator '-'
    cout << "Product of the two numbers" << num1 * num2 << endl;
    //Division operator '/'
    cout << "Division of the two numbers" << (float)(num1 / num2) << endl;
    //Modulus operator '%'
    cout << "Modulus of the two numbers" << num1 % num2 << endl;
    //increment operator '++'
    cout << "Increment num 1 by 1:" << ++num1 << endl;
    //Decrement operator '--'
    cout << "Decrement num 1 by 1:" << --num1 << endl;
     //*** Comparison operators*/
     //Greater than operator '>'
     cout << num1 << "greater than" << num2 << "=" << (bool)(num1 > num2) << endl;
     //less than operator '<'
     cout << num1 << "less than" << num2 << "=" << (bool)(num1 < num2) << endl;
     //Equal to operator '=='
     cout << num1 << "Equal to" << num2 << "=" << (bool)(num1 == num2) << endl;
     //Not Equalto operator'!='
     cout << num1 << "Not Equal to" << num2 << "=" << (bool)(num1 != num2) << endl;
    
//*** Boolean operators*/
    //Boolean operator '&&'
    cout << boolvar1 << "&&" << boolvar2 << "=" << (boolvar1 && boolvar2) << endl;
    //Boolean operator '||'
    cout << boolvar1 << "||" << boolvar2 << "=" << (boolvar1 || boolvar2) << endl;
    //Boolean operator '!'
    cout << "!" << boolvar1 << "=" << (!boolvar1) << endl;

    //*** Pointers operators*/
    //Declare a pointer
    int *ptr = nullptr;
    //output adressof num1
     cout <<"adress of num1 = "<<&num1 << endl;
    
    cout<< "value at memory location pointed"<<*ptr<< endl;

    



}