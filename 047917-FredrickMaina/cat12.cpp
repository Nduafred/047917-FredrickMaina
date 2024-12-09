#include <iostream>
using namespace std;

int main() {
    float num;
    cin >> num;  // Accept float number from the user

    // Convert float to integer (implicitly or explicitly)
    int convertedNum = static_cast<int>(num);

    // Output the result
    cout << "The integer value is: " << convertedNum << endl;

    return 0;
}
