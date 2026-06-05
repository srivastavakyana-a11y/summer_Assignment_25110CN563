#include<iostream>
using namespace std;        
int main()
{
    int n, a=0,b=1,c;
    cout<<"Enter the number of terms  :";
    cin>>n;
    if(n==1)
    {
        cout<<"Fibonacci series is "<<a;
    }
    else if(n==2)
    {
        cout<<"Fibonacci series is "<<a<<" "<<b;
    }
    else
    {
        cout <<"Fibonacci series is "<<a<<" "<<b;
        for(int i=3;i<=n;i++)
        {
            c=a+b;
            cout<<" "<<c;
            a=b;
            b=c;
        }
    }

}