// Denis Maiyo, BCS-03-0078/2025
// Week 4 - Task 1: Employee Bonus System (for loop)
// Program to calculate bonuses for multiple employees

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Constant for bonus percentage
const double BONUS_PERCENTAGE = 5.0;  // 5% of basic salary

int main() {
    cout << "========== EMPLOYEE BONUS SYSTEM ==========\n" << endl;
    cout << "Processing bonuses for 5 employees\n" << endl;
    
    // Arrays to store employee data
    string employeeNames[5];
    double basicSalaries[5];
    double bonuses[5];
    double totalSalaries[5];
    
    // Use for loop to input details for 5 employees
    for (int i = 0; i < 5; i++) {
        cout << "\n--- Employee " << (i + 1) << " ---" << endl;
        cout << "Enter Employee Name: ";
        getline(cin, employeeNames[i]);
        
        cout << "Enter Basic Salary: ";
        cin >> basicSalaries[i];
        
        // Clear input buffer
        cin.ignore();
        
        // Calculate bonus using formula: Bonus = 0.05 × Basic Salary
        bonuses[i] = (basicSalaries[i] * BONUS_PERCENTAGE) / 100.0;
        
        // Calculate total salary: Total Salary = Basic Salary + Bonus
        totalSalaries[i] = basicSalaries[i] + bonuses[i];
    }
    
    // Display report for all employees
    cout << "\n========== BONUS REPORT ==========\n" << endl;
    cout << left << setw(15) << "Employee Name" 
         << right << setw(18) << "Basic Salary" 
         << right << setw(12) << "Bonus (5%)" 
         << right << setw(15) << "Total Salary" << endl;
    cout << "-------------------------------------------------------------" << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << left << setw(15) << employeeNames[i]
             << right << setw(18) << fixed << setprecision(2) << basicSalaries[i]
             << right << setw(12) << fixed << setprecision(2) << bonuses[i]
             << right << setw(15) << fixed << setprecision(2) << totalSalaries[i] << endl;
    }
    
    cout << "-------------------------------------------------------------" << endl;
    cout << "===================================\n" << endl;
    
    return 0;
}
