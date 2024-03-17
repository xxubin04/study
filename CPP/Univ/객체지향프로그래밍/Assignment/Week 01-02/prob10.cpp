#include <iostream>

using namespace std;

int main() {
    int N, v = 1, i = 1;
    cin >> N;
    
    while (v <= (N/2)) 
        v *= 2;
    
    while (v > 0) {
        if (N >= v) {
            N -= v;
            cout << 1;
        }
        else {
            cout << 0;
        }
        v /= 2;
    }

    return 0;
}