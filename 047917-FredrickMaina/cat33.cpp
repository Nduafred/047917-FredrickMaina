#include <iostream>
using namespace std;

int main() {
    int marks;

    // Input the student's marks
    cout << "Enter the student's marks: ";
    cin >> marks;

    // Determine the grade using nested if-else
    if (marks >= 70) {
        cout << "Grade: A" << endl;
    } else {
        if (marks >= 60) {
            cout << "Grade: B" << endl;
        } else {
            if (marks >= 50) {
                cout << "Grade: C" << endl;
            } else {
                if (marks >= 40) {
                    cout << "Grade: D" << endl;
                } else {
                    cout << "Grade: F" << endl;
                }
            }
        }
    }

    return 0;
}
