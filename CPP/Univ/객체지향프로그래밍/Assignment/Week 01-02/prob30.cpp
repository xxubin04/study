#include <iostream>

using namespace std;
const int MAX = 100;

int main() {
    int n;
    cin >> n;

    int gap[MAX][2] = {};

    for (int i = 0; i < n; ++i) {
        cin >> gap[i][0] >> gap[i][1];
    }

    int max_overlap = 0;
    int idx_1 = 0, idx_2 = 0;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int overlap = min(gap[i][1], gap[j][1]) - max(gap[i][0], gap[j][0]);
            if (overlap > max_overlap) {
                max_overlap = overlap;
                idx_1 = i;
                idx_2 = j;
            }
        }
    }

    if (gap[idx_1][0] < gap[idx_2][0]) {
        int temp = idx_1;
        idx_2 = idx_2;
        idx_1 = temp;
    }

    cout << "[" << gap[idx_1][0] << ", " << gap[idx_1][1] << "]" << endl;
    cout << "[" << gap[idx_2][0] << ", " << gap[idx_2][1] << "]" << endl;

    return 0;
}