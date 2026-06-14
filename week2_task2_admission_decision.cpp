// Denis Maiyo, BCS-03-0078/2025
// Week 2 - Task 2: Admission Decision (Nested if)
// Program to determine student admission eligibility

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Declare variables to store student information
    string studentName;
    int age;
    int examScore;
    string admissionDecision;
    
    // Prompt user to enter student details
    cout << "========== COLLEGE ADMISSION DECISION ==========\n" << endl;
    
    cout << "Enter Student Name: ";
    getline(cin, studentName);
    
    cout << "Enter Age: ";
    cin >> age;
    
    cout << "Enter Exam Score: ";
    cin >> examScore;
    
    // Use nested if statements to determine admission eligibility
    if (age >= 18) {
        // First check: Student is 18 and above
        if (examScore >= 50) {
            // Second check: Score is 50 and above
            admissionDecision = "Admitted";
        }
        else {
            // Score is below 50
            admissionDecision = "Not Admitted: Low Score";
        }
    }
    else {
        // Age is below 18
        admissionDecision = "Not Admitted: Underage";
    }
    
    // Display admission decision
    cout << "\n========== ADMISSION RESULT ==========\n" << endl;
    cout << "Student Name:       " << studentName << endl;
    cout << "Age:                " << age << endl;
    cout << "Exam Score:         " << examScore << endl;
    cout << "Decision:           " << admissionDecision << endl;
    cout << "=====================================\n" << endl;
    
    return 0;
}
