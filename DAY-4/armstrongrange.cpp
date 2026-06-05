#include<iostream>
#include <cmath>
using namespace std;
int main()  
{
    int start, end;
    cout<<"Enter the start range:";
    cin>>start;
    cout<<"Enter the ending range:";
    cin>>end;
    cout<<"Armstrong numbers between "<<start<<" and "<<end<<" are: ";
    for (int n=start;n<=end;n++)
    {
        int temp=n,digits=0,sum=0;
        while(temp!=0)
        {
            digits++;
            temp=temp/10;
        }
        temp=n;
        while(temp!=0)
        {
            int remainder=temp%10;
            sum+=pow(remainder,digits);
            temp=temp/10;
        }
        if(sum==n)
        {
            cout<<n<<" ";
        }
        }
    }
