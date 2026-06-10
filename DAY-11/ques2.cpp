#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number:";
    cin>>a>>b;
    cout<<"Maximum="<<maximum(a,b);
    return 0;
}
int maximum(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}