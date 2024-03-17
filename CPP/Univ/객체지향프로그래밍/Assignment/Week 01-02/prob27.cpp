#include <iostream>
using namespace std;

const int MAX = 100;

int main() {
    int n, cnt = 0;
    int nums[MAX] = {};

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] > nums[j]) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}