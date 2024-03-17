#include <iostream>

using namespace std;

int main() {
    int sum = 0, num = 0;
    int N;

    cin >> N;
    
    while(true) {
        if (num*num < N)
            num++;
        else if (num*num >= N) {
            num--;
            cout << num*num;
            break;
        }
    }
    return 0;
}