#include<iostream>
using namespace std ;
int main () {
    int a[100] , n , sum = 0 ;
    float average ;
    cout << " Enter the number of elements : ";
    cin >> n ;
    cout << " Enter the array elements : \n ";
    for (int i = 0 ; i < n ; i++ ){
        cin >> a[i] ;
        sum += a[i] ;
    }
    average = (float)sum/n ;
    cout << " Sum of array elements : " << sum << endl ;
    cout << " Average of array elements = " << average << endl ;
    return 0 ;
}