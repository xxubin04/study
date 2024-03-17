#include <iostream>

using namespace std;

int main() {
    int date1[3] = {};  
    int date2[3] = {};

    cin >> date1[0] >> date1[1] >> date1[2] >> date2[0] >> date2[1] >> date2[2];

    for (int i = 0; i < 3; i++) {
        if (date1[i] < date2[i]) {
            cout << -1;
            break;
        }
        else if (date1[i] > date2[i]) {
            cout << 1;
            break;
        }
        else 
            if (i == 2 && date1[i] == date2[i]) {
                cout << 0;
            }
            continue;
    }
    return 0;
}