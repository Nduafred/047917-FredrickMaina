#include <iostream>

using namespace std;

// Function that takes two integer parameters a and b
void addAndDisplay(int value1, int value2) {
    int sum = value1 + value2; // Sum is a local variable within the function
    cout << "Sum of: " << value1 << " and " << value2 << " is " << sum << endl;
}

int main() {
    int value1 = 10;
    int value2 = 20;

    // Call the function 
    addAndDisplay(value1, value2);

    return 0;
}