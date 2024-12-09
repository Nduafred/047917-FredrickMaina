#include <iostream>
using namespace std;

int main() {
    double num;
    cin >> num;  // Accept double number from the user

    // Convert double to int using C-style casting
    int convertedNum = (int)num;

    // Output the result
    cout << "The integer value is: " << convertedNum << endl;

    return 0;
}
