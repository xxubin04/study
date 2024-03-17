#include <iostream>

using namespace std;
const int MAX = 100;

int main() {
    int N, K;
    cin >> N;
    
    int num[MAX] = {};
    for (int i = 0; i < N; ++i) {
        cin >> num[i];
    }
    
    cin >> K;
    
    int max_cnt = 0;
    int start = 0, end = 0, total = 0;
    
    while (end < N) {
        if (total + num[end] <= K) {
            total += num[end];
            end++;
            max_cnt = max(max_cnt, end - start);
        } 
        else {
            total -= num[start];
            start++;
        }
    }
    
    cout << max_cnt << endl;

    return 0;
}