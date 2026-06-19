#include<iostream>
using namespace std;
int main()
{
    int r,c ;
    cout<<"Enter numbers of rows and columns:";
    cin>>r>>c;
    int a[10][10];
    cout<<"Enter elements of  matrix:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Transpose of matrices:\n";
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<a[j][i]<<"";

        }
        cout<<endl;
    }
    return 0;
}
