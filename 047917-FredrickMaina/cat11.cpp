#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter number"
    cin >> number;  // Read the number

    // Check if the number is positive, negative, or zero
    if (number > 0)
        cout << "Positive" << endl;
    else if (number < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;

    return 0;
}
