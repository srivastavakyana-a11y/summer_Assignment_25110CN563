#include <iostream>
using namespace std;
string empName[50];
float salary[50];
int n = 0;
void addEmployee()
{
    cout << "Enter Employee Name: ";
    cin >> empName[n];
    cout << "Enter Salary: ";
    cin >> salary[n];
    n++;
}
void displayEmployees()
{
    cout << "\nEmployee Details\n";

    for(int i = 0; i < n; i++)
    {
        cout << "Name: " << empName[i]
             << "  Salary: " << salary[i] << endl;
    }
}
int main()
{
    int choice;
    do
    {
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
        }
    } while(choice != 3);
    return 0;
}