    #include<iostream>
    #include<cmath>
using namespace std;
int main()
{
    int binary;
    cin>>binary;
    int decimal = 0, i = 0, rem;
    while (binary != 0) {
        rem = binary % 10;
        binary /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
    cout << decimal;
        return 0;
}