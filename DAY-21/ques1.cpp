#include <iostream>
using namespace std ;
int main()
{
    char str[100];
    cout<<"Enter the string ";
    cin.getline(str,100);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
cout<<"length of the string is:"<<len;
return 0;
}