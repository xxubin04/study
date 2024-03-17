#include <iostream>

using namespace std;
const int MAX = 100;

int main() {
    int n, k;
    cin >> n;

    int num[n] = {};
    int shifted_num[n] = {};
     
     for (int i = 0; i < n; i++) 
        cin >> num[i];
    
    cin >> k;

    for (int j = 0; j < n; j++) {
        if (j + k >= n)
            shifted_num[j + k - n] = num[j]; 
        else
            shifted_num[j + k] = num[j];
    }
    
    for (int j = 0; j < n; j++)
        cout << shifted_num[j] << " ";
    
    return 0;
}