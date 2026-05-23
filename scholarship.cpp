#include <iostream>
#include <string>
using namespace std;

int main() {
    // I declared variables and prompted the user for inputs
    string studentName;
    int examMarks;
    float attendancePercentage;
    string scholarshipStatus;
    
    cout << "Enter Student Name: ";
    getline(cin, studentName);
    
    cout << "Enter Exam Marks (0-100): ";
    cin >> examMarks;
    
    cout << "Enter Attendance Percentage (0-100): ";
    cin >> attendancePercentage;
    
    // I used nested if statements to determine the scholarship eligibility
    if (examMarks >= 70) {
        // I treat exam marks of 70 and above as eligible for further checks
        if (attendancePercentage >= 80) {
            scholarshipStatus = "Full Scholarship";
        }
        else {
            scholarshipStatus = "Partial Scholarship";
        }
    }
    else if (examMarks >= 50 && examMarks <= 69) {
        // I treat exam marks between 50 and 69 as the next eligibility bracket
        if (attendancePercentage >= 85) {
            scholarshipStatus = "Partial Scholarship";
        }
        else {
            scholarshipStatus = "No Scholarship";
        }
    }
    else {
        // I set scholarship to No Scholarship when marks are below 50
        scholarshipStatus = "No Scholarship";
    }
    
    // I displayed the student name and the final scholarship status
    cout << "\n========== SCHOLARSHIP RESULT ==========\n";
    cout << "Student Name:        " << studentName << endl;
    cout << "Scholarship Status:  " << scholarshipStatus << endl;
    cout << "======================================\n";
    
    return 0;
}