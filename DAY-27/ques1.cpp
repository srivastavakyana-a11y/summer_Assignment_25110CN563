#include<iostream>
using namespace std;
int main()
{
    string name;
    int rollno;
    float marks;
    cout<<"Enter student roll no: ";
    cin>>rollno;
    cin.ignore();
    cout<<"Enter student name: ";
    getline(cin, name);
    cout<<"Enter marks of student: ";
    cin>>marks;
    cout<<"**************STUDENTS RECORD************"<<endl;
    cout<<"Roll no: "<<rollno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Marks: "<<marks<<endl;
    return 0;



}