#include <iostream>
using namespace std;
int main()
{
    int option;
    cout << "Hi.This isyour BBIT sem 1 timetable (May-Aug 2024)" <<endl;
    cout << "\n1.Monday\n2.Tuseday\n3.Wednesday\n4.Thursday\n5.Friday" << endl;
    cout << "Please salect day of choice(eg . 1.2.3..4.5)" <<endl;
    cin >> option;
    switch (option)
    {
        case 1:
        cout << "\n1.Monday classes" << endl;
        cout << "8.00am-9.00am : Introduction to programing 1." << endl;
        cout << "9.00am-10.00am : Introduction to programing 1." << endl;
        cout << "10.00am-11.00am : Introduction to programing 1." << endl;
        break;

        case 2:
        cout << "\n2.Tuesday classes" << endl;
        cout << "8.00am-9.00am : Introduction to programing 1." << endl;
        cout << "9.00am-10.00am : Introduction to programing 1." << endl;
        cout << "10.00am-11.00am : Introduction to programing 1." << endl;
        break;

        case 3:
        cout << "\n3.Wednesday classes" << endl;
        cout << "8.00am-9.00am : Introduction to programing 1." << endl;
        cout << "9.00am-10.00am : Introduction to programing 1." << endl;
        cout << "10.00am-11.00am : Introduction to programing 1." << endl;
        break;

        case 4:
        cout << "\n4.Thursday" << endl;
        cout << "8.00am-9.00am : Introduction to programing 1." << endl;
        cout << "9.00am-10.00am : Introduction to programing 1." << endl;
        cout << "10.00am-11.00am : Introduction to programing 1." << endl;
        break;

        case 5:
        cout << "\n5.Friday" << endl;
        cout << "8.00am-9.00am : Introduction to programing 1." << endl;
        cout << "9.00am-10.00am : Introduction to programing 1." << endl;
        cout << "10.00am-11.00am : Introduction to programing 1." << endl;
        break;

        default:
        cout << "Invalid input" <<endl;
    }
}