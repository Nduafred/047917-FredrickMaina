#include <iostream>
using namespace std;

int main() {
    char shape;
    double area;

    cout << "Enter the to calculate the area of different shapes for C for Circle, S for Square, R for Rectangle: ";
    cout << "All capital";
    cin >> shape;
   

    switch (shape) 
    {
        case 'C': 
        
            double radius;
            cout << "Enter the radius of the circle: " <<endl;
            cin >> radius;
            area = 3.1416 * radius * radius;
            cout << "The area of the circle is: " << area << endl;
            break;
        
        case 'S':  
            double side;
            cout << "Enter the side of the square: " <<endl;
            cin >> side;
            area = side * side;
            cout << "The area of the square is: " << area << endl;
            break;
        
        case 'R':  
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            area = length * width;
            cout << "The area of the rectangle is: " << area << endl;
            break;
        
        default:
            cout << "Invalid shape. Please enter C, S, or R." << endl;
    }

    return 0;
}
