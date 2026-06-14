// Denis Maiyo, BCS-03-0078/2025
// Week 1 - Task 2: Driving Test Result Evaluation System
// Program to determine pass/fail status for driving test candidates

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Declare variables to store student information
    string studentName;
    int theoryMarks;
    int practicalMarks;
    
    // Prompt user to enter student details
    cout << "========== DRIVING TEST RESULT EVALUATION ==========\n" << endl;
    
    cout << "Enter Student Name: ";
    getline(cin, studentName);
    
    cout << "Enter Theory Test Marks: ";
    cin >> theoryMarks;
    
    cout << "Enter Practical Test Marks: ";
    cin >> practicalMarks;
    
    // Calculate average score using the formula: Average = (Theory + Practical) / 2
    double averageScore = (theoryMarks + practicalMarks) / 2.0;
    
    // Determine pass/fail status: Pass if average >= 50
    string result = (averageScore >= 50) ? "PASSED" : "FAILED";
    
    // Display results
    cout << "\n========== RESULT ==========\n" << endl;
    cout << "Student Name:      " << studentName << endl;
    cout << "Theory Marks:      " << theoryMarks << endl;
    cout << "Practical Marks:   " << practicalMarks << endl;
    cout << "Average Score:     " << fixed << setprecision(2) << averageScore << endl;
    cout << "Status:            " << result << endl;
    cout << "===========================\n" << endl;
    
    return 0;
}
