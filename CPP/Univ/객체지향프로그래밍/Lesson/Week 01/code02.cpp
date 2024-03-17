#include <iostream>

using namespace std;

int main() {
    int number = 123, input;
    cout << "Please enter an integer: ";

    cin >> input;

    if (input == number)
        cout << "Numbers match! :-)" << endl;
    else   
        cout << "Numbers do not match! :-(" << endl;

    return 0;
}