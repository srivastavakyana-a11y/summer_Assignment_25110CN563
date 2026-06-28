#include <iostream>
using namespace std;
int main() {
    int choice;
    float balance = 5000, amount;
    do {
        cout << "\n--- Bank Account System ---";
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Check Balance";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Amount Deposited!";
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if(amount <= balance) {
                    balance -= amount;
                    cout << "Amount Withdrawn!";
                } else {
                    cout << "Insufficient Balance!";
                }
                break;
            case 3:
                cout << "Current Balance: " << balance;
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