#include <iostream>
using namespace std;
int main() {
    int n1,n2;
    cout<<" Enter the size of first array : ";
    cin>>n1;
    int arr1[n1];
     cout<<"enter array elements of first array";
    for(int i=0;i<n1; i++)
    {
        cin >>arr1[i];
    }
    cout<<" Enter the size of second array : ";
    cin>>n2;
    int arr2[n2];
    cout<<"enter array elements of second array";
    for(int i=0;i<n2; i++)
    {
        cin >>arr2[i];
    }
    cout <<"union of arrays:";
    for (int i=0;i<n1;i++)
    {
        int duplicate=0;
        for (int j=0;j<i;j++)
        {
            if(arr1[i]==arr1[j])
            {duplicate =1;
            break;
            }
        
        }
        if(duplicate==0)
        {
            cout<<arr1[i]<<"";

        }

    }
    for(int i=0;i<n2;i++)
    {
        int found=0;
        for (int j=0;j<n1;j++)
        {
            if(arr2[i]==arr1[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            cout <<arr2[i]<<"";

        }
    }
    return 0;
}
