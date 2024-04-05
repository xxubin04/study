#include <iostream>

using namespace std;

const int MAX = 100;

int main() {
    int data[MAX];
    int n, k;
    
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> data[i];

    cin >> k;

    for (int i = 0; i < n; i++) {  // 순서대로 검사하는 방법을 순차검색
        if (data[i] == k) {        // (sequential search)라고 한다.
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}