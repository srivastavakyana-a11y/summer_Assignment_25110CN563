#include<iostream>
#include<ctime>;
using namespace std;
int main()
{
int num, guess ,tries;
srand(time(NULL));
num=(rand()%100)+1;
cout<<"***************NUMBER GUESSING GAME**********"<<endl ;
cout<<" GUESS THE NUMBER BETWEEN (1-100)"<<endl;
do
{
 cout<<" Enter your guess"<< endl;
 cin>>guess;
 if(guess>num)
 {
    cout<<"TOO HIGH. TRY AGAIN"<<endl;
 }
 else if(guess<num )
 {
    cout<<"TOO LOW . TRY AGAIN "<<endl;

 }
 else{
    cout<<"CORRECT GUESS"<<endl;

 }
}while(num!=guess);
cout<<"*******************************************";
return 0;


}

