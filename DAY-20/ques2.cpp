#include<iostream>
using namespace std;
int main()
{
    int n ,flag=0;
    int a[10][10];
    cout<<"Enter the size of matrix:";
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
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=1;
            }
            
        }
    }
    if(flag==0)
    {
    cout<<"Symmetric matrix";
    }
    else
    {
    cout<<" not Symmetric matrix";
    }
    return 0;
}