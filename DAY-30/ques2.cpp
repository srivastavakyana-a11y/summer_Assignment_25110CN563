#include <iostream>
using namespace std;
string book[50];
int n = 0;
void addBook()
{
    cout << "Enter Book Name: ";
    cin >> book[n];
    n++;
}
void displayBooks()
{
    cout << "\nAvailable Books:\n";

    for(int i = 0; i < n; i++)
    {
        cout << i + 1 << ". " << book[i] << endl;
    }
}
int main()
{
    int choice;
    do
    {
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
        }
    } while(choice != 3);
    return 0;
}