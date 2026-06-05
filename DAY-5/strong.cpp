#include<iostream>
using namespace std;
int main()
{
   int n ,original,sum=0;
    cout<<"Enter a number : ";

    cin>>n;
    original=n;
    while(n!=0)
    {
        int digits =n%10;
        int fact =1;
        for(int i=1;i<=digits;i++)
        {
            fact=fact*i;
        }
        sum+=fact;  
        n=n/10;
    }
    if(sum==original)
    {
        cout<<original<<" is a strong number.";
    }
    else
    {
        cout<<original<<" is not a strong number.";
    }
}