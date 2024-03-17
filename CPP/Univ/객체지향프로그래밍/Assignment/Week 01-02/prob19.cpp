#include <iostream>
#include <math.h>

using namespace std;
const int MAX = 100;

int main() {
    int n, k;
    double gap = INFINITY;
    int ans = 0;
    cin >> n;
    int num[MAX] = {};

    for (int i = 0; i < n; i++) 
        cin >> num[i];
        
    cin >> k;

    for (int i = 0; i < n; i++) {
        if (abs(num[i] - k) < gap) {
            gap = abs(num[i] - k);
            ans = num[i];
        }
    }
    cout << ans << endl;

    return 0;
}