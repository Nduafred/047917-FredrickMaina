#include <iostream>
using namespace std;

int main() {
    int choice;
    double radius, length, width, base, height;

    // Display menu
    cout << "\nMenu:" << endl;
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculate the area of a rectangle" << endl;
    cout << "3. Calculate the area of a triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            // Area of a circle:
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle: " << 3.14159 * radius * radius << endl;
            break;

        case 2:
            // Area of a rectangle: 
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the width: ";
            cin >> width;
            cout << "Area of the rectangle: " << length * width << endl;
            break;

        case 3:
            // Area of a triangle:
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the height: ";
            cin >> height;
            cout << "Area of the triangle: " << 0.5 * base * height << endl;
            break;

        case 4:
            // Quit the program
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please run the program again and select a valid option." << endl;
    }

    return 0;
}