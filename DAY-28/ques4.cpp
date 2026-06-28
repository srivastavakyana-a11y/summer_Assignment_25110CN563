#include <iostream>
using namespace std;
int main() {
    string name[5];
    long long phone[5];
    int n;
    cout << "How many contacts do you want to store? ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "\nEnter Name: ";
        cin >> name[i];
        cout << "Enter Phone Number: ";
        cin >> phone[i];
    }
    cout << "\n--- Contact List ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << name[i]
             << " | Phone: " << phone[i] << endl;
    }
    return 0;
}