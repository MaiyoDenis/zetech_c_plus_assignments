// Denis Maiyo, BCS-03-0078/2025
// Week 4 - Task 2: Savings Withdrawal System (while loop)
// Program to allow customers to withdraw money repeatedly

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "========== SAVINGS WITHDRAWAL SYSTEM ==========\n" << endl;
    
    // Declare variables
    double accountBalance;
    double withdrawalAmount;
    
    // Get initial account balance
    cout << "Enter Initial Account Balance: ";
    cin >> accountBalance;
    
    cout << "\nYou can withdraw money repeatedly. Enter withdrawal amount when prompted." << endl;
    cout << "The system will stop when you don't have sufficient balance.\n" << endl;
    
    // Use while loop to allow repeated withdrawals
    while (accountBalance > 0) {
        cout << "Current Balance: Ksh. " << fixed << setprecision(2) << accountBalance << endl;
        cout << "Enter Withdrawal Amount (or 0 to stop): Ksh. ";
        cin >> withdrawalAmount;
        
        // Check if user wants to stop
        if (withdrawalAmount == 0) {
            break;
        }
        
        // Check if withdrawal amount exceeds balance
        if (withdrawalAmount > accountBalance) {
            cout << "Error: Insufficient funds! You only have Ksh. " 
                 << fixed << setprecision(2) << accountBalance << endl;
            cout << "Withdrawal cancelled.\n" << endl;
        }
        else if (withdrawalAmount < 0) {
            // Handle negative withdrawal amounts
            cout << "Error: Withdrawal amount cannot be negative!\n" << endl;
        }
        else {
            // Valid withdrawal - deduct from balance
            accountBalance -= withdrawalAmount;
            cout << "Withdrawal Successful!" << endl;
            cout << "Remaining Balance: Ksh. " << fixed << setprecision(2) << accountBalance << "\n" << endl;
            
            // Loop stops if balance becomes zero
            if (accountBalance == 0) {
                cout << "Your account balance is now zero. No more withdrawals possible.\n" << endl;
                break;
            }
        }
    }
    
    // Display final summary
    cout << "========== FINAL SUMMARY ==========\n" << endl;
    cout << "Final Account Balance: Ksh. " << fixed << setprecision(2) << accountBalance << endl;
    cout << "Thank you for using our service!\n" << endl;
    
    return 0;
}
