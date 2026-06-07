#include <iostream>
using namespace std;
int mian()
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}