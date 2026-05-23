#include <iostream>
using namespace std;

int main() {
    // I declared variables and took inputs from the user
    int bookID, dueDate, returnDate;
    
    cout << "Enter Book ID: ";
    cin >> bookID;
    
    cout << "Enter Due Date: ";
    cin >> dueDate;
    
    cout << "Enter Return Date: ";
    cin >> returnDate;
    
    // I calculated the number of days the book is overdue
    int daysOverdue = returnDate - dueDate;
    
    // I determined the fine rate and calculated the fine using if...else
    int fineRate;
    int fineAmount;
    
    if (daysOverdue <= 7 && daysOverdue > 0) {
        // If overdue is up to 7 days, I apply Ksh. 20 per day
        fineRate = 20;
        fineAmount = daysOverdue * fineRate;
    }
    else if (daysOverdue >= 8 && daysOverdue <= 14) {
        // If overdue is between 8 and 14 days, I apply Ksh. 50 per day
        fineRate = 50;
        fineAmount = daysOverdue * fineRate;
    }
    else if (daysOverdue >= 15) {
        // If overdue is 15 days or more, I apply Ksh. 100 per day
        fineRate = 100;
        fineAmount = daysOverdue * fineRate;
    }
    else {
        // If the book is returned on time (or early), I charge no fine
        fineRate = 0;
        fineAmount = 0;
    }
    
    // I displayed the final fine report details
    cout << "\n========== LIBRARY FINE REPORT ==========\n";
    cout << "Book ID:        " << bookID << endl;
    cout << "Due Date:       " << dueDate << endl;
    cout << "Return Date:    " << returnDate << endl;
    cout << "Days Overdue:   " << daysOverdue << endl;
    cout << "Fine Rate:      Ksh. " << fineRate << " per day" << endl;
    cout << "Fine Amount:    Ksh. " << fineAmount << endl;
    cout << "=========================================\n";
    
    return 0;
}