//Write a C++ program that prints the first 10 even numbers using a for loop.
#include <iostream>
using namespace std;

int main() {
    // Loop through and print the first 10 even numbers
    for (int i = 1; i <= 10; i++) {
        cout << 2 * i << " "; // Multiply i by 2 to get the even number
    }
    cout << endl; // To move to the next line after printing all numbers
    return 0;
}
