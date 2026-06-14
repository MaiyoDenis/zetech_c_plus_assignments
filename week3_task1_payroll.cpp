// Denis Maiyo, BCS-03-0078/2025
// Week 3 - Task 1: Payroll System Using Functions
// Program to calculate employee salaries using modular programming

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Global constant for overtime rate per hour
const double OVERTIME_RATE = 150.0;  // Ksh. 150 per hour

// Structure to store employee details
struct Employee {
    string name;
    double basicSalary;
    double overtimeHours;
    double overtimePay;
    double netSalary;
};

// Function to get employee details from user
void getEmployeeDetails(Employee &emp) {
    cout << "Enter Employee Name: ";
    getline(cin, emp.name);
    
    cout << "Enter Basic Salary: ";
    cin >> emp.basicSalary;
    
    cout << "Enter Overtime Hours: ";
    cin >> emp.overtimeHours;
    
    // Clear the input buffer for next getline
    cin.ignore();
}

// Function to calculate overtime pay
// Formula: Overtime Pay = Overtime Hours × Rate Per Hour
void calculateOvertimePay(Employee &emp) {
    emp.overtimePay = emp.overtimeHours * OVERTIME_RATE;
}

// Function to calculate net salary
// Formula: Net Salary = Basic Salary + Overtime Pay
void calculateNetSalary(Employee &emp) {
    emp.netSalary = emp.basicSalary + emp.overtimePay;
}

// Function to display formatted payslip
void displayPayslip(const Employee &emp) {
    cout << "\n========== PAYSLIP ==========\n" << endl;
    cout << "Employee Name:    " << emp.name << endl;
    cout << "Basic Salary:     Ksh. " << fixed << setprecision(2) << emp.basicSalary << endl;
    cout << "Overtime Hours:   " << fixed << setprecision(2) << emp.overtimeHours << " hours" << endl;
    cout << "Overtime Rate:    Ksh. " << fixed << setprecision(2) << OVERTIME_RATE << "/hour" << endl;
    cout << "Overtime Pay:     Ksh. " << fixed << setprecision(2) << emp.overtimePay << endl;
    cout << "-----------------------------" << endl;
    cout << "Net Salary:       Ksh. " << fixed << setprecision(2) << emp.netSalary << endl;
    cout << "=============================\n" << endl;
}

int main() {
    cout << "========== PAYROLL SYSTEM ==========\n" << endl;
    
    // Create an employee object
    Employee employee;
    
    // Call functions in logical sequence
    getEmployeeDetails(employee);
    calculateOvertimePay(employee);
    calculateNetSalary(employee);
    displayPayslip(employee);
    
    return 0;
}
