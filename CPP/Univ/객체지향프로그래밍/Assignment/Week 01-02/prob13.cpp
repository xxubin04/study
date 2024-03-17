#include <iostream>

using namespace std;

int main() {
    int cnt = 0;

    for (int x = 0; x <= 100; x++) {
        for (int y = 0; y <= 100; y++) {
            if (3*y >= x && 3*y <= 2*x && x*x+y*y <= 10000) {
                cnt++;
            }
        }
    } 
    cout << cnt << endl;

    return 0;
}
