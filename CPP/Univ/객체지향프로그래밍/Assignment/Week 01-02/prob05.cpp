#include <iostream>

using namespace std;
const int MAX = 100;

int main() {
    int N;

    cin >> N;

    const int SIZE = N;

    int num_array[MAX] = {}; 
    for (int i = 0; i < N; i++) {
        cin >> num_array[i];
    }
    
    // 버블정렬

    for (int i = 0; i < N-1; i++) {
        for (int j = i; j < N-1; j++) {
            if (num_array[j] > num_array[j+1]) {
                int temp = num_array[i];
                num_array[i] = num_array[i+1];
                num_array[i+1] = temp;
            }
        }
    }

    for (int j = 0; j < N; j++) {
        if (num_array[j] >= 0) {
            cout << num_array[j];
            break;
        }
        else if (num_array[N-1] < 0) {
            cout << -1;
            break;
        }
    }

    return 0;
}