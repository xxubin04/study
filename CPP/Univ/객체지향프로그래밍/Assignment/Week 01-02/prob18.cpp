#include <iostream>

using namespace std;

int main() {
    int N;
    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    cin >> N;

    while (N > 0) {
        int digit = N % 10;
        count[digit]++;
        N /= 10;
    }

    for (int i = 0; i < 10; i++)
        if (i < 9)
            cout << count[i] << ", ";
        else
            cout << count[i];

    return 0;
}