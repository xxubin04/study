#include <iostream>

using namespace std;
const int MAX = 100;

int main() {
    int n;
    int data[MAX] = {};

    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> data[i];
    
    int max_count = 1, count = 1;

    for (int j = 0; j < n; j++) {
        if (data[j] == data[j+1]) 
            count++;
        else
            count = 1;
            max_count = max(max_count , count);
    }
    cout << max_count << endl;

    return 0;
}