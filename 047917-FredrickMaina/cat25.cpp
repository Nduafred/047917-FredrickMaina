#include <iostream>
using namespace std;

int main() {
    int age;

    // Input the user's age
    cout << "Enter your age: ";
    cin >> age;

    // Check voting eligibility
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote. You must be at least 18 years old." << endl;
    }

    return 0;
}
