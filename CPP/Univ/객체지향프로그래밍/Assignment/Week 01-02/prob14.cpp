#include <iostream>

using namespace std;

int main() {
    int count = 0;

    auto is_coprime = [](int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a == 1;
    };

    for (int i = 2; i <= 100; i++) {
        for (int j = i + 1; j <= 100; j++) {
            for (int k = j + 1; k <= 100; k++) {
                if (is_coprime(i, j) && is_coprime(j, k) && is_coprime(i, k)) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}