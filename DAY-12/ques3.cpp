#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    fibnocci(n);
    return 0;
}
void fibnocci(int n)
{
    int a=0,b=1,c;
    for (int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}