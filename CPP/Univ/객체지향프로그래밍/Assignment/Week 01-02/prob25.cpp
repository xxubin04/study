#include <iostream>
using namespace std;

const int MAX = 100;

int main() {
    int n, k = 1;
    int num[MAX] = {};
    int ans[MAX] = {};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (num[i] > num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    ans[0] = num[0];

    for (int i = 1; i < n; i++) {
        if (num[i] != num[i-1]) 
            ans[k++] = num[i];
    }

    cout << k << ": "; 

    for (int i = 0; i < k; i++) 
        cout << ans[i] << " ";

    cout << endl;

    return 0;
}