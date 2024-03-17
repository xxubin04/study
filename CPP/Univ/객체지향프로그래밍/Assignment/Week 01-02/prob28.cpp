#include <iostream>

using namespace std;
const int MAX = 100;

int main() {
    int n;
    cin >> n;

    int max_length = 1, current_length = 1; 
    int num[MAX] = {};

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for (int i = 1; i < n; i++) {
        if (num[i] >= num[i-1])
            current_length++;
        else {
            max_length = max(max_length, current_length);
            current_length = 1; 
        }
    }

    max_length = max(max_length, current_length);
    

    cout << max_length << endl;

    return 0;
}