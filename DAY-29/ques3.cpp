#include <iostream>
using namespace std;
int main()
{
    string str;
    int choice;
    cout<<"Enter a string";
    getline(cin,str);
    do
    {
        cout<<"1.Length: "<<endl;
        cout<<"2.Reverse: "<<endl;
        cout<<"3.Display: "<<endl;
        cout<<"4.Exit: "<<endl;
        cout<<"Enter choice" <<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Length= "<<str.length();
            break;
            case 2:
            for (int i = str.length() - 1; i >= 0; i--)
                    cout << str[i];
                break;
            case 3:
                cout << str;
                break;
            case 4:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid Choice";
        }
    } while (choice != 4);
    return 0;
}
      