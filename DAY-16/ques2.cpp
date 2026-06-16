#include<iostream>
using namespace std ;
int main () {
    int n ;
    cout << " Enter the size of array : " ;
    cin >> n ;
    int a[n] ;
    cout << " Enter array elements : " ;
    for( int i = 0 ; i < n ; i++ ){
        cin >> a[i] ;
    }
    int maxfreq = 0 ;
    int maxelement ;
    for (int i =0 ; i < n ; i++ ) {
        int count = 1 ; 
        for ( int j = i+1 ; j < n ; j++ ) {
            if (a[i] == a[j]){
                count++ ;
            }
       }
    if(count > maxfreq){
        maxfreq = count ;
        maxelement = a[i] ;
        }
    }
    cout << " Element with maximum frequency = " << maxelement << endl;
    cout << " Frequency = " << maxfreq << endl ;
    return 0 ;
}