// Denis Maiyo, BCS-03-0078/2025
// Week 3 - Task 2: Water Billing System Using Functions
// Program to calculate monthly water bills using modular programming

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Global constants
const double RATE_PER_UNIT = 25.0;     // Ksh. 25 per unit
const int DISCOUNT_THRESHOLD = 100;    // Units threshold for discount
const double DISCOUNT_PERCENTAGE = 10.0; // 10% discount

// Structure to store customer details
struct Customer {
    string name;
    int unitsConsumed;
    double totalBill;
    double discount;
    double finalAmount;
};

// Function to get customer details
void getCustomerDetails(Customer &cust) {
    cout << "Enter Customer Name: ";
    getline(cin, cust.name);
    
    cout << "Enter Units Consumed: ";
    cin >> cust.unitsConsumed;
    
    // Clear input buffer
    cin.ignore();
}

// Function to calculate water bill
// Formula: Water Bill = Units Consumed × Rate Per Unit
void calculateBill(Customer &cust) {
    cust.totalBill = cust.unitsConsumed * RATE_PER_UNIT;
}

// Function to apply discount if applicable
// Discount: 10% if customer uses more than 100 units
void applyDiscount(Customer &cust) {
    if (cust.unitsConsumed > DISCOUNT_THRESHOLD) {
        cust.discount = (cust.totalBill * DISCOUNT_PERCENTAGE) / 100.0;
    }
    else {
        cust.discount = 0.0;
    }
    
    // Calculate final amount after discount
    cust.finalAmount = cust.totalBill - cust.discount;
}

// Function to display formatted bill
void displayBill(const Customer &cust) {
    cout << "\n========== WATER BILL ==========\n" << endl;
    cout << "Customer Name:     " << cust.name << endl;
    cout << "Units Consumed:    " << cust.unitsConsumed << " units" << endl;
    cout << "Rate Per Unit:     Ksh. " << fixed << setprecision(2) << RATE_PER_UNIT << endl;
    cout << "Bill Before Disc:  Ksh. " << fixed << setprecision(2) << cust.totalBill << endl;
    
    if (cust.discount > 0) {
        cout << "Discount (10%):    Ksh. " << fixed << setprecision(2) << cust.discount << endl;
    }
    else {
        cout << "Discount:         Ksh. 0.00" << endl;
    }
    
    cout << "-------------------------------" << endl;
    cout << "Final Amount:      Ksh. " << fixed << setprecision(2) << cust.finalAmount << endl;
    cout << "================================\n" << endl;
}

int main() {
    cout << "========== WATER BILLING SYSTEM ==========\n" << endl;
    
    // Create a customer object
    Customer customer;
    
    // Call functions in logical sequence
    getCustomerDetails(customer);
    calculateBill(customer);
    applyDiscount(customer);
    displayBill(customer);
    
    return 0;
}
