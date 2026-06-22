#include<iostream>
using namespace std;
int main()
{
    string str;
    int count=0;
    cout<<"Enter a string sentence ";
    getline(cin,str);
    for (int i=0;i<str.length();i++)

    {
        if(str[i]==' ')
        count++;
    }
    cout<<"Total words="<<count+1;
    return 0;
}

