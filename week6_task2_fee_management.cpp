// Denis Maiyo, BCS-03-0078/2025
// Purpose: Student Fee Management System using Classes and Objects

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// ============================================================
// Class Definition: Student
// ============================================================
class Student {
    // Attributes (data members)
    private:
        string name;          // Student name
        string admissionNo;   // Admission number
        double feeBalance;    // Fee balance

    public:
        // ------------------------------------------------
        // Member Function: inputStudent()
        // Purpose: Input student details from the user
        // ------------------------------------------------
        void inputStudent() {
            cout << "Enter Student Name: ";
            cin.ignore(); // Clear input buffer
            getline(cin, name);

            cout << "Enter Admission Number: ";
            getline(cin, admissionNo);

            cout << "Enter Fee Balance (KES): ";
            cin >> feeBalance;
        }

        // ------------------------------------------------
        // Member Function: makePayment()
        // Purpose: Reduce fee balance when payment is made
        // ------------------------------------------------
        void makePayment() {
            double payment;

            cout << "\nEnter Payment Amount (KES): ";
            cin >> payment;

            // Validate payment amount
            if (payment <= 0) {
                cout << "✘ Invalid payment amount!" << endl;

            } else if (payment > feeBalance) {
                // Payment exceeds balance
                cout << "✘ Payment exceeds balance!" << endl;
                cout << "Maximum payable amount: KES "
                     << fixed << setprecision(2)
                     << feeBalance << endl;

            } else {
                // Deduct payment from balance
                feeBalance -= payment;
                cout << "\n✔ Payment of KES "
                     << fixed << setprecision(2)
                     << payment
                     << " processed successfully!" << endl;
            }
        }

       
        void displayStatus() {
            cout << "\n========================================" << endl;
            cout << "        STUDENT FEE STATUS              " << endl;
            cout << "========================================" << endl;
            cout << left << setw(22) << "Student Name:"
                 << name          << endl;
            cout << left << setw(22) << "Admission Number:"
                 << admissionNo   << endl;
            cout << left << setw(22) << "Fee Balance:"
                 << "KES " << fixed << setprecision(2)
                 << feeBalance    << endl;
            cout << "----------------------------------------" << endl;

            // Show fee status message
            if (feeBalance == 0) {
                cout << "Status: ✔ FULLY PAID" << endl;
            } else {
                cout << "Status: ✘ BALANCE OUTSTANDING" << endl;
            }
            cout << "========================================" << endl;
        }
};


int main() {
    // Create an object of the Student class
    Student student1;

    cout << "========================================" << endl;
    cout << "     STUDENT FEE MANAGEMENT SYSTEM      " << endl;
    cout << "========================================" << endl;

    // Step 1: Input student details
    cout << "\n--- Enter Student Details ---" << endl;
    student1.inputStudent();

    // Step 2: Display fee status before payment
    cout << "\n--- Fee Status Before Payment ---";
    student1.displayStatus();

    // Step 3: Process a fee payment
    cout << "\n--- Processing Fee Payment ---" << endl;
    student1.makePayment();

    // Step 4: Display updated fee status after payment
    cout << "\n--- Updated Fee Status After Payment ---";
    student1.displayStatus();

    return 0;
}