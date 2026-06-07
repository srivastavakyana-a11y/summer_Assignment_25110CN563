#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<sumofdigits(n);
    return 0;
}
int sumofdigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    return(n%10)+sumofdigits(n/10);
    }

