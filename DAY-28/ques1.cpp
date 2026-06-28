#include<iostream>
using namespace std;
int main()
{
    int choice;
    int books = 100;
    do {
        cout << "\n--- Library Management System ---";
        cout << "\n1. Issue Book";
        cout << "\n2. Return Book";
        cout << "\n3. Display Available Books";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                if (books > 0) {
                    books--;
                    cout << "Book Issued Successfully!";
                } else {
                    cout << "No books available!";
                }
                break;
            case 2:
                books++;
                cout << "Book Returned Successfully!";
                break;
            case 3:
                cout << "Available Books: " << books;
                break;
            case 4:
                cout << "Thank You!";
                break;
            default:
                cout << "Invalid Choice!";
        }
    } while(choice != 4);
    return 0;
}