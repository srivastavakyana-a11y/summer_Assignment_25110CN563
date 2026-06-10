#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number";
    cin>>num;
    if(num==palindrome(num))
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    
}
int palindrome(int num)
{
    int rev=0,rem,temp;
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    return rev;
}