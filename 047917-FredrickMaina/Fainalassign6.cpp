#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void displayTrafficLight() {
    int light = 0;
    while (true) {
        switch (light) {
            case 0:
                cout << "\033[31mRed Light\033[0m" << endl; // Red light
                this_thread::sleep_for(chrono::seconds(5));
                break;
            case 1:
                cout << "\033[33mYellow Light\033[0m" << endl; // Yellow light
                this_thread::sleep_for(chrono::seconds(2));
                break;
            case 2:
                cout << "\033[32mGreen Light\033[0m" << endl; // Green light
                this_thread::sleep_for(chrono::seconds(5));
                break;
        }
        light = (light + 1) % 3; // Cycle through 0, 1, 2
    }
}

int main() {
    displayTrafficLight();
    return 0;
}