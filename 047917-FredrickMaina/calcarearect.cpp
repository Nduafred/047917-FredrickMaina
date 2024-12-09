#include <iostream>

using namespace std;
 
int main() {

    int length, width;
    
    // Prompt user to enter length
    cout << "Enter length: ";
    cin >> length;

    // Prompt user for width
    cout << "Enter width: ";
    cin >> width;
    int area = length * width;
    
    cout << "Area of rectangle of length " << length << " and width " << width << " is: " << area << endl; 
    return 0;
}