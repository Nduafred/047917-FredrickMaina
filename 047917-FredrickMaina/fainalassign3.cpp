#include <iostream>
using namespace std;

int main() {
    string studentname, course;
    int score, gradeCategory;
    
    cout << "Please enter your name" << endl;
    getline(cin, studentname);
    cout << "Enter your course" << endl;
    cin >> course;
    cout << studentname << " please enter your score" << endl;
    cin >> score;

    // Determine the grade category
    if (score >= 70 && score <= 100)
        gradeCategory = 1;  // A
    else if (score >= 60 && score <= 69)
        gradeCategory = 2;  // B
    else if (score >= 50 && score <= 59)
        gradeCategory = 3;  // C
    else if (score >= 40 && score <= 49)
        gradeCategory = 4;  // D
    else if (score >= 1 && score <= 39)
        gradeCategory = 5;  // F
    else {
        cout << "Invalid score" << endl;
        return 0;
    }

    // Use switch for grade output
    switch (gradeCategory) {
        case 1:
            cout << studentname << " Your grade is A. In " << course << endl;
            break;
        case 2:
            cout << studentname << " Your grade is B. In " << course << endl;
            break;
        case 3:
            cout << studentname << " Your grade is C. In " << course << endl;
            break;
        case 4:
            cout << studentname << " Your grade is D. In " << course << endl;
            break;
        case 5:
            cout << studentname << " Your grade is F. In " << course << endl;
            break;
    }

    return 0;
}