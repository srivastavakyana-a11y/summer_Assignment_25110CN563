#include <iostream>
using namespace std;
int main() {
    int totalSeats = 50, booked;
    cout << "Total Seats Available: " << totalSeats << endl;
    cout << "Enter number of tickets to book: ";
    cin >> booked;
    if (booked <= totalSeats) {
        totalSeats = totalSeats - booked;
        cout << "Booking Successful!" << endl;
        cout << "Remaining Seats: " << totalSeats << endl;
    } else {
        cout << "Not enough seats available!" << endl;
    }
    return 0;
}