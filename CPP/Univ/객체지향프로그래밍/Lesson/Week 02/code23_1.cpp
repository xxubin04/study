// #include <iostream>
// // 다시 보기
// using namespace std;
// const int MAX = 100;

// int main() {
//     int n, temp;
//     int data[MAX] = {};
//     int ans[MAX] = {};

//     cin >> n;

//     for (int i = 0; i < n; i++) 
//         cin >> data[i];

//     for (int i = n-1; i > 0; i--) {
//         for (int j = 0; j < i; j++) {
//             if (data[j] > data[j+1]) 
//                 int temp = data[j];
//                 data[j] = data[j+1];
//                 data[j+1] = temp;
//         }
//     }

//     int idx = -1;
//     for (int j = 0; j < n-1; j++) {
//         if (j < n-2 && data[j] != data[j+1]) 
//             ans[++idx] = data[j];
//         else if (j == n-2 && data[j] != data[j+1]) {
//             ans[++idx] = data[j];
//             ans[++idx] = data[j+1];
//         }
//     }   

//     cout << idx;   // 0

//     for (int k = 0; k <= idx; k++)
//         cout << data[k] << " ";    // 4

//     return 0;
// }





#include <iostream>

using namespace std;
const int MAX = 100;

int main() {
    int n, temp;
    int data[MAX] = {};
    int ans[MAX] = {};

    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> data[i];

    for (int i = n-1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (data[j] > data[j+1]) 
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
        }
    }

    int idx = 0;
    ans[idx] = data[0];
    for (int j = 1; j < n; j++) {
        if (data[j] != data[j-1]) {
            idx++;
            ans[idx] = data[j];
            // ans[++idx] = data[j];
        }
    }
    cout << idx;  

    for (int k = 0; k <= idx; k++)
        cout << ans[k] << " ";

    for (int i = 0; i < n; i++)
        cout << data[i] << " ";

    return 0;
}