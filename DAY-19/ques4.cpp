#include<iostream>
using namespace std;
int main()
{
    int n ,sum=0;
    int a[10][10];
    cout<<"Enter the order of matrix:";
    cin>>n;
    
    cout<<"Enter elements of  matrix:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i][i];
    }
    cout<<"Diagonal sum= "<<sum;
    return 0;
    }
