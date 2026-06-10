#include<iostream> 
using namespace std ;
int prime ( int n ) {
    for ( int i = 2 ; i < n ; i++ ) {
        if ( n % i == 0 )
        return 0 ;
    }
    return 1 ;
}
int main () {
    int n ; 
    cout << " Enter a number : ";
    cin >> n ;
    if ( n <= 1){
        cout << " Not prime ";
    }
    else if ( prime (n) ) {
        cout << " prime ";
    }
    else {
        cout << " Not prime" ;
    }
    return 0 ;
}