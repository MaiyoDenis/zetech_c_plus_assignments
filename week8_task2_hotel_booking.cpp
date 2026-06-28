#include <iostream>
#include <string>

using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int numberOfDays;

public:
    // Constructor
    RoomBooking(string name, int room, int days) {
        guestName = name;
        roomNumber = room;
        numberOfDays = days;
        cout << "Room booking confirmed" << endl;
    }

    // Member function to show booking details
    void displayBooking() {
        cout << "--- Booking Details ---" << endl;
        cout << "Guest Name: " << guestName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Days Booked: " << numberOfDays << endl;
        cout << "-----------------------" << endl;
    }

    // Destructor
    ~RoomBooking() {
        cout << "Booking ended, room released" << endl;
    }
};

int main() {
    // Create an object of the class
    RoomBooking myBooking("Alice Smith", 101, 3);
    
    // Display booking details
    myBooking.displayBooking();
    
    return 0;
}
