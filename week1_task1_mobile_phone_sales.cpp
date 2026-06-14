// Denis Maiyo, BCS-03-0078/2025
// Week 1 - Task 1: Mobile Phone Sales Receipt System
// Program to calculate and display a customer receipt for phone purchases

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Declare variables to store customer and purchase information
    string customerName;
    string phoneModel;
    int quantity;
    double pricePerPhone;
    
    // Prompt user to enter customer details
    cout << "========== MOBILE PHONE SALES RECEIPT SYSTEM ==========\n" << endl;
    
    cout << "Enter Customer Name: ";
    getline(cin, customerName);
    
    cout << "Enter Phone Model: ";
    getline(cin, phoneModel);
    
    cout << "Enter Quantity Bought: ";
    cin >> quantity;
    
    cout << "Enter Price Per Phone: ";
    cin >> pricePerPhone;
    
    // Calculate total sales amount using the formula: Total = Quantity × Price
    double totalSalesAmount = quantity * pricePerPhone;
    
    // Display a well-formatted receipt
    cout << "\n========== CUSTOMER RECEIPT ==========\n" << endl;
    cout << "Customer Name:    " << customerName << endl;
    cout << "Phone Model:      " << phoneModel << endl;
    cout << "Quantity Bought:  " << quantity << endl;
    cout << "Price Per Phone:  Ksh. " << fixed << setprecision(2) << pricePerPhone << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Total Amount:     Ksh. " << fixed << setprecision(2) << totalSalesAmount << endl;
    cout << "========================================\n" << endl;
    
    return 0;
}
