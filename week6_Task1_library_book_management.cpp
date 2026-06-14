// Denis Maiyo, BCS-03-0078/2025
// Purpose: Library Book Management System using Classes and Objects

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class Book {
    // Attributes (data members)
    private:
        string title;        // Book title
        string author;       // Author name
        int copiesAvailable; // Number of copies available

    public:
      
        void inputDetails() {
            cout << "Enter Book Title: ";
            cin.ignore(); // Clear input buffer
            getline(cin, title);

            cout << "Enter Author Name: ";
            getline(cin, author);

            cout << "Enter Number of Copies Available: ";
            cin >> copiesAvailable;
        }

        
        void borrowBook() {
            if (copiesAvailable > 0) {
                copiesAvailable--; // Reduce by 1
                cout << "\n✔ Book borrowed successfully!" << endl;
                cout << "Copies remaining: " << copiesAvailable << endl;
            } else {
                // No copies left to borrow
                cout << "\n✘ Sorry, no copies available to borrow!" << endl;
            }
        }

        
        void displayDetails() {
            cout << "\n========================================" << endl;
            cout << "          BOOK DETAILS                  " << endl;
            cout << "========================================" << endl;
            cout << left << setw(25) << "Book Title:"
                 << title            << endl;
            cout << left << setw(25) << "Author:"
                 << author           << endl;
            cout << left << setw(25) << "Copies Available:"
                 << copiesAvailable  << endl;
            cout << "========================================" << endl;
        }
};


int main() {
    // Create an object of the Book class
    Book book1;

    cout << "========================================" << endl;
    cout << "   LIBRARY BOOK MANAGEMENT SYSTEM       " << endl;
    cout << "========================================" << endl;

    // Step 1: Input book details
    cout << "\n--- Enter Book Details ---" << endl;
    book1.inputDetails();

    // Step 2: Display book details before borrowing
    cout << "\n--- Book Details Before Borrowing ---";
    book1.displayDetails();

    // Step 3: Borrow a book
    cout << "\n--- Processing Book Borrowing ---" << endl;
    book1.borrowBook();

    // Step 4: Display updated book details after borrowing
    cout << "\n--- Updated Book Details After Borrowing ---";
    book1.displayDetails();

    return 0;
}