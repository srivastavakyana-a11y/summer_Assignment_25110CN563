#include<iostream>
using namespace std;
int main()
{
    int choice;
    float balance=10000,amount;
    cout <<"****************ATM MENU***************"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit Menu"<<endl;
    cout<<"3. Withdraw Money"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice)
    {
    case1:
    cout<<"current balance:Rs"<<balance;
    break;
    case2:
    cout<<"Enter the amount to deposit :";
    cin>>amount;
    balance+=amount;
    cout<<"Updated Balance :Rs"<<balance;
    break;
    case3:
    cout<<"Enter the amount to withdraw :";
    cin>>amount ;
    if(amount<=balance)
    {
        balance-=amount;
        cout<<"Withdrawal Successful"<<endl;
        cout<<"Remaining balnace :Rs"<<balance;
    }
    else{
        cout<<"Insufficient Balance!";
    }
    break;
    case4:
    cout<<"Thankyou for using ATM";
    break;
    default:
    cout<<"Invalid choice";
    }
    return 0;
}