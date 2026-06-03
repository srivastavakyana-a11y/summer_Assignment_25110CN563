#include<iostream>
using namespace std;
int main()
{
    int num, i = 2, flag = 0;
    cout <<"Enter a number: ";      
    cin>>num;
    while(i<=num/2)
    {
        if(num%i==0)
        {
            flag++;
            break;
        }
        i++;
    }
    if(flag==2)

    {
        cout <<"The number is not prime.";
    }
    else
    {
        cout <<"The number is  prime.";
    }
}