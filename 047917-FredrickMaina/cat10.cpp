#include <iostream>
using namespace std;

int main() {
    string correctPassword = "password123";
    string enteredPassword;
    int attempts = 0;

    // Keep asking for password until 3 incorrect attempts
    while (attempts < 3) {
        cout << "Enter password: ";
        cin >> enteredPassword;

        if (enteredPassword == correctPassword) {
            cout << "Access granted." << endl;
            return 0; // Exit program if password is correct
        }

        attempts++; // Increment on wrong password
        cout << "Incorrect password. Attempts left: " << 3 - attempts << endl;
    }

    cout << "Password blocked." << endl; // Blocked after 3 wrong attempts
    return 0;
}
