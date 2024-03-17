#include <iostream>

using namespace std;
const int MAX = 100;

int main() {
    int i = 0, cnt = 0;
    int array[MAX] = {};

    for (i = 0; i < MAX; i++) {
        int a;
        cin >> a;
        if (a != -1)
            array[i] = a;
        else
            break;
    }

    for (int j = 0; j < i; j++) {
        if (j == 0) {
            if (array[0] <= array[1])
                cnt++;
        }
        else if (j == i-1) {
            if (array[i-1] <= array[i-2])
                cnt++;
        }
        else {
            if (array[j] <= array[j-1] && array[j] <= array[j+1])
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}