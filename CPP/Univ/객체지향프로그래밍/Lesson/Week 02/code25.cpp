#include <iostream>

using namespace std;
const int MAX = 100;

// Insertion Sort

int main() {
    int n, t;
    int data[MAX];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> t;
        int j = i-1;  // 배열의 마지막 원소의 인덱스값
        while (j >= 0 && data[j] > t) {
            data[j+1] = data[j];  // 뒤로 한 칸 이동
            j--;
        }
        data[j+1] = t;

        for (int k = 0; k <= i; k++) 
            cout << data[k] << " ";
        cout << endl;
    }
    return 0;
}