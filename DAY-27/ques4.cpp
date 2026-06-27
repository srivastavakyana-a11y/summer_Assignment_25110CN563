#include<iostream>
using namespace std;
int main()
{
    string name;
    float percentage;
    int m1,m2,m3,total;
    cout<<"Enter student name: ";
    getline(cin, name);
    cout<<"Enter marks of 3 subjects: ";
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    percentage=total/3.0;
    cout<<"**************MARKSHEET************"<<endl;
   
    cout<<"Name: "<<name<<endl;
    cout<<" Total Marks: "<<total<<endl;
    cout<<"Percentage: "<<percentage<<endl;
    if(percentage>=40)
    {
        cout<<"Result: Pass";
    }
    else{
        cout<<"Result: Fail";
    }
    return 0;


}