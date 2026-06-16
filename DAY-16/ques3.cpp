#include<iostream>
using namespace std ;
int main () {
    int n , sum ; 
    cout << " Enter the size of array : " ;
    cin >> n ;
    int a[n] ;
    cout << " Enter array elements : " ;
    for( int i = 0 ; i < n ; i++ ){
        cin >> a[i] ;
    }
    cout << " Enter required sum : " ;
    cin >> sum ;
    int flag = 0 ;
    for (int i = 0 ; i < n ; i++) {
        for (int j = i+1 ; j < n ; j++ ) {
            if(a[i] + a[j] == sum ){
                cout << " Pair found : " << a[i] << " and " << a[j] << endl ;
                flag = 1 ;
            }
        }
    }
    if (flag == 0 ) {
        cout << " Pair not found with given sum. " ;
    }
    return 0 ;
}