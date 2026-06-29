#include<iostream>
using namespace std;
int main()
{
    int choice;
    float a,b;
    do
    {
        cout<<"1.ADD: "<<endl;
         cout<<"1.SUBTRACT: "<<endl;
          cout<<"1.MULTIPLY: "<<endl;
           cout<<"1.DIVIDE: "<<endl;
            cout<<"1.EXIT: "<<endl;
             cout<<"1.Enter Choice: "<<endl;
            cin>>choice;
            if(choice>=1&&choice<=4)
            {
                cout<<"Enter two numbers:";
                cin>>a>>b;

            }
            switch(choice)
            {
                case 1:
                cout<<"Result= "<<a+b<<endl;
                break;
                case 2:
                cout<<"Result= "<<a-b<<endl;
                break;
                case 3:
                cout<<"Result= "<<a*b<<endl;
                break;
                case 4:
                if (b != 0)
                    cout << "Result = " << a / b<<endl;
                else
                    cout << "Division by zero not possible"<<endl;
                break;
                case 5:
                cout<<"Exiting --"<<endl;
                default:
                cout<<"Invalid choice"<<endl;

            }
        }while(choice!=5);
            return 0;

        }
