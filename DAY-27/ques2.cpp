#include<iostream>
using namespace std;
int main()
{
    string name;
    int empID;
    float salary;
    cout<<"Enter employee id: ";
    cin>>empID;
    cin.ignore();
    cout<<"Enter employee name: ";
    getline(cin, name);
    cout<<"Enter salary of employee: ";
    cin>>salary;
    cout<<"**************EMPLOYEE RECORD************"<<endl;
    cout<<"Employee ID: "<<empID<<endl;
    cout<<" Employee Name: "<<name<<endl;
    cout<<"Employee Salary: "<<salary<<endl;
    return 0;
}