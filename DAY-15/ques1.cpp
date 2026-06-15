#include <iostream>
using namespace std;
int main()
{
    int arr[100], n;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter array elements:\n";
    for (int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<"";
    }
    return 0;
}
