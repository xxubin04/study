#include <iostream>

using namespace std;
const int MAX = 100;

int main() {
    int N, i;
    int ans = 0;
    int num[MAX] = {};
    
    for (i = 0; i < MAX; i++) {
        int a;
        cin >> a;

        if (a == -1)    break;
        else    num[i] = a;
    }

    for (int j = 1; j < i; j++) {
        if (num[j] > num[j - 1]) 
            ans += num[j] - num[j - 1];
    }

    cout << ans << endl;
    return 0;
}