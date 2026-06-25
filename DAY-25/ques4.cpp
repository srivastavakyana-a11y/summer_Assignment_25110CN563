#include<iostream> 
#include<string> 
using namespace std ;
int main () {
string words[100] , temp , str ;
int n = 0 ;
cout << "Enter a sentence : " ;
getline(cin , str );
temp = " " ;
for (int i = 0 ; i <= str.length() ; i++ ) {
    if(str[i] == ' '  || str[i] == '\0' ) {
        words[n++] =temp ;
        temp = " " ;
    }
        else {
            temp += str[i] ;
        }
    }
    for(int i  = 0 ; i < n-1 ; i++) {
        for(int j = i + 1 ;  j < n ; j++){
            if (words[i].length() > words[j].length()){
                string t = words[i] ;
                words[i] = words[j] ;
                words[j] = t ;
            }
        }
    }
    cout << "Words sortedb by length : \n " ;
    for (int i = 0 ; i < n ; i++) {
        cout << words[i] << " " ;
    }
    return 0 ;
}