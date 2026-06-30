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
        cout << "Name: " << name[i]
             << "  Marks: " << marks[i] << endl;
    }
}
int main()
{
    int choice;
    do
    {
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
        }
    } while(choice != 3);

    return 0;
}