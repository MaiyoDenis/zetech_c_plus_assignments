// Denis Maiyo, BCS-03-0078/2025
// Week 4 - Task 3: Password Verification System (do-while loop)
// Keep asking for username and password until the user gets it right

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "========== LOGIN SYSTEM ==========" << endl;

    // Hard-coded login details for this demo
    string correctUsername = "admin";
    string correctPassword = "password123";

    // Store what the user types in
    string enteredUsername;
    string enteredPassword;
    bool accessGranted = false;

    // Keep looping until the login is successful
    do {
        cout << "Enter Username: ";
        cin >> enteredUsername;

        cout << "Enter Password: ";
        cin >> enteredPassword;

        // Verify the entered credentials
        if (enteredUsername == correctUsername && enteredPassword == correctPassword) {
            cout << "\n========== Access Granted ==========" << endl;
            cout << "Welcome to the system!" << endl;
            cout << "You have been successfully logged in.\n" << endl;
            accessGranted = true;
        }
        else {
            cout << "\nIncorrect credentials, try again\n" << endl;
        }

    } while (!accessGranted);  // Stop once access is granted

    return 0;
}

