#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<reversenum(n);
    return 0;
}
int reversenum(int n ,int rev=0)
{
    if(n==0)
    {
        return rev;
    }
    return reversenum(n/10,rev*10+n%10);
}