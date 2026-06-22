#include<iostream>
using namespace std;
int main()
{
    char str[100];
    int vowels=0,consonants=0;
    cout<<"Enter the string";
    cin.getline(str,100);
    for (int i=0;str[i]!='\0';i++)
    {
        char ch=tolower(str[i]);

         if (ch >= 'a' && ch <= 'z') 
         {
        if(ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i')
        vowels++;
        else
        consonants++;
        }
}
    cout<<"Number of vowels:"<<vowels<<endl;
        cout<<"Number of consonants:"<<consonants<<endl;
        return 0;
}