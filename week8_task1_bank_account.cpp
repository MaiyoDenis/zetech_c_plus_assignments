#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double accountBalance;

public:
    // Constructor
    BankAccount(string name, string number, double balance) {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;
        cout << "Account successfully created" << endl;
    }

    // Member function to display account details
    void displayAccount() {
        cout << "--- Account Details ---" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: $" << accountBalance << endl;
        cout << "-----------------------" << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Account closed successfully" << endl;
    }
};

int main() {
    // Create an object of the class
    BankAccount myAccount("John Doe", "ACC123456789", 1500.50);
    
    // Display account details
    myAccount.displayAccount();
    
    return 0;
}
