#include <iostream>
#include <math.h>

using namespace std;
const int MAX = 100;

int main() {
    int n, k = 0;
    cin >> n;

    double leader = -INFINITY;
    int leaders[MAX] = {};
    int num[MAX] = {};

    for (int i = 0; i < n; i++)
        cin >> num[i];

    for (int i = 0; i < n; i++) {
        if (leader <= num[i]) {
            leader = num[i];
            leaders[k++] = leader;
        }
    }
    cout << k << ": ";
    for (int i = 0; i < k; i++) 
        cout << leaders[i] << " ";

    return 0;
}