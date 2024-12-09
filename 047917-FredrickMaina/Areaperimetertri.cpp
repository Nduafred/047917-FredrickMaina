/*
Write a program that computes the area and perimeter of a right-angled triangle given:
•	The base as 10
•	Height as 7 
•	Hypotenuse as 12
A = 1/2 × b × h.
P= a+b+c
*/
#include<iostream>
using namespace std;
int main() 
{
   float area,peremeter,base,height,hypotenues;
    area = 0.5 * base * height;
    peremeter = base + height + hypotenues;
    cout<< "enter the base,height,hypotenuse" <<endl;
    cin >> base >> height >> hypotenues;
    cout<< "the Area of the triangle is " << area <<endl;
    cout<< "the Perimeter of the triangle is " << peremeter <<endl;
    return 0;
    
}