#include<iostream>
using namespace std;
int main()
{
    string name;
    int empID;
    float basic ,hra, da, gross;
    cout<<"Enter employee id: ";
    cin>>empID;
    cin.ignore();
    cout<<"Enter employee name: ";
    getline(cin, name);
    cout<<"Enter  basic salary of employee: ";
    cin>>basic;
    hra=basic*0.20;
    da=basic*0.10;
    gross=basic+hra+da;

    cout<<"**************SALARY DETAILS************"<<endl;
    cout<<"Employee ID: "<<empID<<endl;
    cout<<" Employee Name: "<<name<<endl;
    cout<<"Basic Salary: "<<basic<<endl;
    cout<<"Gross Salary: "<<gross<<endl;
    return 0;
}