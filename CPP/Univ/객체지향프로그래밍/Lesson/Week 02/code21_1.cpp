#include <iostream>
#include <algorithm>
#include <limits>

using namespace std;
const int MAX = 100;

int main() {
    int n;
    int max_total = numeric_limits<int>::min();
    int data[MAX];
    
    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> data[i];
    

    for (int j = 1; j <= n; j++) {   // 더할 개수
        for (int k = 0; k < n; k++) {   // 시작 인덱스
            int total = 0;
            for (int p = k; p < k+j; p++) {
                total += data[p];
            }
            max_total = max(max_total, total);
        }
    }

    // for (int j = 0; j < n; j++) {   // 시작 인덱스
    //     int total = 0;
    //     for (int k = j; k < n; k++) {  
    //         total += data[k];
    //         max_total = max(max_total, total);
    //     }
    // }

    cout << "The max sum is " << max_total << endl;

    return 0;
}