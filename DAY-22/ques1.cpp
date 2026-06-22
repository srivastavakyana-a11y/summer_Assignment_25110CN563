#include<iostream>
using namespace std;
int main()
{
    string str,rev="";
    cout<<"Enter a string";
    cin>>str;
    for (int i=str.length()-1;i>=0;i--)
    {
        rev+=str[i];
    }
    if(str==rev)
    cout<<"palindrome string";
    else
    cout<<"not a palindrome string";
    return 0;
}