#include <iostream>
using namespace std;
int main() {
    int n, arr[100], choice;
    cout << "Enter size of array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    do {
        cout << "\n1. Display\n2. Sum\n3. Largest Element\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;
            case 2: {
                int sum = 0;
                for (int i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum;
                break;
            }
            case 3: {
                int max = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i] > max)
                        max = arr[i];
                cout << "Largest = " << max;
                break;
            }
            case 4:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid Choice";
        }
    } while (choice != 4);
    return 0;
}