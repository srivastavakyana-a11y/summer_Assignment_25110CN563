#include<iostream>
using namespace std;
int main()
{
    int num, rev= 0, digit,original;
    cout << "Enter an integer: ";
    cin >> num;
    original = num;
    while (num != 0) {
        digit = num % 10;
        rev = rev* 10 + digit;
        num /= 10;
    }
    if (original == rev)
        cout << original<< " is a palindrome.";
    else
        cout << original<< " is not a palindrome.";
    return 0;
}