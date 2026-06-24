#include<iostream> 
#include<string>
using namespace std ;
int main () {
    string str , result = " " ;
    cout << "Enter a string : " ;
    getline (cin ,str) ;
    for(int i = 0 ; i < str.length() ; i++) {
        int j ; 
        for( j = 0 ; j < result.length() ; j++ ) {
            if(str[i] == result[j]) {
                break ; 
            }
        }
        if(j == result.length () ) {
            result += str[i];
        }
    }
    cout << "String after removing duplicates :" << result ;
    return 0 ; 
}