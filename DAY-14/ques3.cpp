#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largest = arr[0] ;
    int secondlargest = arr[0] ;
    for(int i = 1 ; i < n ; i++ ) {
        if(arr[i] > largest ){
            secondlargest = largest ;
            largest = arr[i] ;
        }
        else if (arr[i] > secondlargest && arr[i] != largest){
            secondlargest =arr[i];
        }
    }
    cout << " Second largest element = " << secondlargest ;
    return 0 ;
}