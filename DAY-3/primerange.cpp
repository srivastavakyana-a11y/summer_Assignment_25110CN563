#include<iostream>
using namespace std;
int main()
{
    int start , end , i, j, flag;
    cout <<"Enter the starting number: ";   
    cin>>start;
    cout <<"Enter the ending number: ";
    cin>>end;
    cout <<"Prime numbers between "<<start<<" and "<<end<<" are: ";
    for(i=start; i<=end; i++)
    {
        if(i==1 || i==0)
            continue;
        flag=1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            cout <<i<<" ";
    }
}
