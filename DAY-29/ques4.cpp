#include <iostream>
#include <string>
using namespace std;

struct Item
{
    int id;
    string name;
    int quantity;
    float price;
};

Item item[100];
int total = 0;

void addItem()
{
    cout << "\nHow many items do you want to add? ";
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter Item ID: ";
        cin >> item[total].id;

        cout << "Enter Item Name: ";
        cin >> item[total].name;

        cout << "Enter Quantity: ";
        cin >> item[total].quantity;

        cout << "Enter Price: ";
        cin >> item[total].price;

        total++;
    }

    cout << "\nItems Added Successfully!\n";
}

void displayItem()
{
    if(total == 0)
    {
        cout << "\nNo Items Available!\n";
        return;
    }

    cout << "\nID\tName\tQuantity\tPrice\n";

    for(int i = 0; i < total; i++)
    {
        cout << item[i].id << "\t"
             << item[i].name << "\t"
             << item[i].quantity << "\t\t"
             << item[i].price << endl;
    }
}

void searchItem()
{
    int id, found = 0;

    cout << "\nEnter Item ID to Search: ";
    cin >> id;

    for(int i = 0; i < total; i++)
    {
        if(item[i].id == id)
        {
            cout << "\nItem Found!\n";
            cout << "ID: " << item[i].id << endl;
            cout << "Name: " << item[i].name << endl;
            cout << "Quantity: " << item[i].quantity << endl;
            cout << "Price: " << item[i].price << endl;
            found = 1;
            break;
        }
    }

    if(found == 0)
        cout << "\nItem Not Found!\n";
}

void updateItem()
{
    int id;

    cout << "\nEnter Item ID to Update: ";
    cin >> id;

    for(int i = 0; i < total; i++)
    {
        if(item[i].id == id)
        {
            cout << "Enter New Quantity: ";
            cin >> item[i].quantity;

            cout << "Enter New Price: ";
            cin >> item[i].price;

            cout << "\nItem Updated Successfully!\n";
            return;
        }
    }

    cout << "\nItem Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Item\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addItem();
                break;

            case 2:
                displayItem();
                break;

            case 3:
                searchItem();
                break;

            case 4:
                updateItem();
                break;

            case 5:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}