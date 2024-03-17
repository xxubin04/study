#include <iostream>

using namespace std;

int main() {
    int N;
    int count = 0;

    cin >> N;

    for (int a = 2; a <= N; a++) {
        for (int b = 2; b < a; b++) {
            if (a != b && a % b == 0)
                count++;
        }
    }
    cout << count << endl;

    return 0;
}