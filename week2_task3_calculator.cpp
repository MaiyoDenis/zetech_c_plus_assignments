// Denis Maiyo, BCS-03-0078/2025
// Week 2 - Task 3: Simple Calculator (switch statement)
// Program to perform basic arithmetic operations

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables to store operands and operator
    double number1, number2;
    char operatorSymbol;
    double result;
    
    // Prompt user to enter values
    cout << "========== SIMPLE CALCULATOR ==========\n" << endl;
    
    cout << "Enter First Number: ";
    cin >> number1;
    
    cout << "Enter Operator (+, -, *, /): ";
    cin >> operatorSymbol;
    
    cout << "Enter Second Number: ";
    cin >> number2;
    
    // Use switch statement to perform the selected operation
    switch (operatorSymbol) {
        case '+':
            // Addition operation
            result = number1 + number2;
            cout << "\n" << number1 << " + " << number2 << " = " << fixed << setprecision(2) << result << endl;
            break;
            
        case '-':
            // Subtraction operation
            result = number1 - number2;
            cout << "\n" << number1 << " - " << number2 << " = " << fixed << setprecision(2) << result << endl;
            break;
            
        case '*':
            // Multiplication operation
            result = number1 * number2;
            cout << "\n" << number1 << " * " << number2 << " = " << fixed << setprecision(2) << result << endl;
            break;
            
        case '/':
            // Division operation with zero check
            if (number2 == 0) {
                cout << "\nError: Division by zero is not allowed!" << endl;
            }
            else {
                result = number1 / number2;
                cout << "\n" << number1 << " / " << number2 << " = " << fixed << setprecision(2) << result << endl;
            }
            break;
            
        default:
            // Invalid operator
            cout << "\nError: Invalid operator entered!" << endl;
    }
    
    cout << "========================================\n" << endl;
    
    return 0;
}
