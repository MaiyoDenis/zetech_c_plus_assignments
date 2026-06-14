// Denis Maiyo, BCS-03-0078/2025
// Week 2 - Task 1: Grading System (if-else ladder)
// Program to assign grades based on exam marks

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Declare variables to store student information
    string studentName;
    int examMarks;
    char grade;
    
    // Prompt user to enter student details
    cout << "========== GRADING SYSTEM ==========\n" << endl;
    
    cout << "Enter Student Name: ";
    getline(cin, studentName);
    
    cout << "Enter Exam Marks (0-100): ";
    cin >> examMarks;
    
    // Use if-else ladder to assign grades based on marks
    if (examMarks >= 70 && examMarks <= 100) {
        grade = 'A';
    }
    else if (examMarks >= 60 && examMarks < 70) {
        grade = 'B';
    }
    else if (examMarks >= 50 && examMarks < 60) {
        grade = 'C';
    }
    else if (examMarks >= 40 && examMarks < 50) {
        grade = 'D';
    }
    else if (examMarks >= 0 && examMarks < 40) {
        grade = 'E';
    }
    else {
        // Handle invalid marks input
        cout << "Invalid marks entered!" << endl;
        return 1;
    }
    
    // Display results
    cout << "\n========== GRADE RESULT ==========\n" << endl;
    cout << "Student Name:  " << studentName << endl;
    cout << "Exam Marks:    " << examMarks << endl;
    cout << "Grade:         " << grade << endl;
    cout << "==================================\n" << endl;
    
    return 0;
}
