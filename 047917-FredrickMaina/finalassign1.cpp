#include <iostream>
using namespace std;

// Function to calculate loan approval
void fredLoanCalculator(int age, int bal, string crb, int time, string cusname) {
    // Check if age is eligible
    if (age >= 22) {
        cout << "Please enter bank balance: "<<endl;
        cin >> bal;

        // Check if balance is sufficient
        if (bal >= 50000) {
            cout << "Is your CRB status good or bad? "<<endl;
            cin >> crb;
            
            // Check if CRB status is good
            if (crb == "good") {
                cout << "How many months have you been a customer? "<<endl;
                cin >> time;

                // Check if time as a customer qualifies
                if (time >= 6) {
                    cout << cusname << ", your loan has been approved!" << endl;
                } else {
                    cout << cusname << ", your loan has not been approved." << endl;
                }
            } else {
                cout << cusname << ", your loan has not been approved due to bad CRB status." << endl;
            }
        } else {
            cout << cusname << ", your loan has not been approved due to insufficient balance." << endl;
        }
    } else {
        cout << cusname << ", you must be at least 22 years old to apply for a loan." << endl;
    }
}

int main() {
    int age, bal, time;
    string crb, cusname;

    // Get user input
    cout << "Please enter your name: ";
    getline(cin, cusname);

    cout << "Enter your age: ";
    cin >> age;

    // Call the loan calculator function with the user input
    fredLoanCalculator(age, bal, crb, time, cusname);

    return 0;
}