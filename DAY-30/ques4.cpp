#include <iostream>
using namespace std;
string name[50];
int marks[50];
int n = 0;
void addStudent()
{
    cout << "Enter Name: ";
    cin >> name[n];
    cout << "Enter Marks: ";
    cin >> marks[n];
    n++;
}
void displayStudents()
{
    cout << "\nStudent Records\n";
    for(int i = 0; i < n; i++)
    {
        cout << i + 1 << ". "
             << name[i] << " - "
             << marks[i] << endl;
    }
}
void searchStudent()
{
    string s;
    cout << "Enter Name to Search: ";
    cin >> s;
    for(int i = 0; i < n; i++)
    {
        if(name[i] == s)
        {
            cout << "Student Found\n";
            cout << "Marks = " << marks[i] << endl;
            return;
        }
    }
    cout << "Student Not Found\n";
}
int main()
{
    int choice;
    do
    {
        cout << "\n----- MENU -----";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
        }
    } while(choice != 4);
    return 0;
}