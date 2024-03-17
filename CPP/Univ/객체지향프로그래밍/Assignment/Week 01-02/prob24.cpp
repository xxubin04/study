#include <iostream>

using namespace std;
const int MAX = 100;

int main() {
    int n;
    int num[MAX] = {};
    cin >> n;
    
    for (int i = 0; i < n; i++) 
        cin >> num[i];

    for (int i = n-1; i > 0; i--) {
        int max_idx = i;
        for (int j = 0; j < i; j++) {
            if (num[j] > num[max_idx]) {
                max_idx = j;
            }
        }

        int temp = num[i];
        num[i] = num[max_idx];
        num[max_idx] = temp;

    }
    for (int i = 0; i < n; i++)
        cout << num[i] << " ";

    return 0;
}