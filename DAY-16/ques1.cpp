#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n-1];
    cout<<"Enter the array elements:\n";
    for(int i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n-1; i++)
    {
        sum+=arr[i];
    }
    int total=n*(n+1)/2;
    cout << "The missing number is: " << total-sum;
    return 0;
}