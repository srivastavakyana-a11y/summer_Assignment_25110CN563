#include<iostream>
using namespace std ;
int main() {
    int answer ;
    int score = 0 ;
    cout << " Quiz Application\n\n " ;
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cin >> answer;
    if (answer == 2){
        score++;
    }
    cout << "\n2. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cin >> answer;
    if (answer == 3){
        score++;
}
    cout << "\n3. Which language is used for C++ programs?\n";
    cout << "1. C++\n2. HTML\n3. SQL\n4. CSS\n";
    cin >> answer;
    if (answer == 1){
        score++;
}
    cout << "\nYour Score = " << score << "/3";
        return 0;
}