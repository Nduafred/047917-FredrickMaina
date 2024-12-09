#include <iostream>
using namespace std;

// Declare an external variable
int globalVar = 100;

int main() {
    // Access the external variable
    cout << "In externalvar.cpp, globalVar: " << globalVar << endl;

    return 0;
}