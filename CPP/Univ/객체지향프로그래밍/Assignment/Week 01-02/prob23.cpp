#include <iostream>

using namespace std;
const int MAX = 100;

int main() {
    int N, idx = 0;
    int num[MAX] = {};

    while (true) {
        cin >> N;

        if (N != -1) {
            bool check = true;

            for (int i = 0; i < idx; i++) {
                if (N == num[i]) {
                    check = false;  // duplicate
                    break;
                }
            }   

            if (check) {
                num[idx++] = N;
                
                for (int j = 0; j < idx - 1; j++) {
                    for (int k = 0; k < idx - j - 1; k++) {
                        if (num[k] > num[k+1]) {
                            int temp = num[k];
                            num[k] = num[k+1];
                            num[k+1] = temp;
                        }
                    }
                }
    
                for (int j = 0; j < idx; j++)
                    cout << num[j] << " ";
                cout << endl;
            }

            else
                cout << "duplicate" << endl;
                
            }
        else 
            break;
    }
    return 0;
}