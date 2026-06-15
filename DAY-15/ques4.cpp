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
    int j = 0 ;
    for (int i = 0 ; i < n ; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i] ;
            j++ ;
        }
    }
    while (j < n ) {
        arr[j] = 0 ;
        j++ ;
    }
    cout << " Array after moving zeores to the end : " ;
    for(int i = 0 ; i < n ; i++) {
        cout << arr [i] << " " ;
    }
    return 0 ;
}




