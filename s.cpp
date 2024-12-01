#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate random motion detection
int motionDetection() {
    return rand() % 2;  // Return either 0 or 1 to simulate motion detection
}

int main() {
    string password;
    int motion;
    int choice;
    bool isLoggedIn = false;

    // Seed random number generator only once
    srand(time(0));

    // Password protection
    cout << "Enter password to access the security system: ";
    cin >> password;

    if (password == "password123") {
        isLoggedIn = true;
        cout << "Access granted!" << endl;
    } else {
        cout << "Incorrect password. Access denied!" << endl;
        return 1;
    }

    while (isLoggedIn) {
        cout << "\nSecurity System Menu:" << endl;
        cout << "1. Check motion detection" << endl;
        cout << "2. Activate alarm" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                motion = motionDetection();
                if (motion == 1) {
                    cout << "Motion detected!" << endl;
                } else {
                    cout << "No motion detected." << endl;
                }
                break;
            case 2:
                cout << "Alarm activated!" << endl;
                // Add code here to activate an alarm
                break;
            case 3:
                cout << "Exiting security system..." << endl;
                isLoggedIn = false;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}
