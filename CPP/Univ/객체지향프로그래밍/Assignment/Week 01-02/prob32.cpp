#include <iostream>

using namespace std;
const int MAX = 100;

int main() {
    int n, cnt = 0, max = 0;
    bool check = true;  // check = 0을 1로 바꿔줬는지 확인
    int array[MAX] = {};


    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> array[i];
    
    for (int i = 0; i < n; i++) {
        cnt = 0;
        check = true;
        for (int j = i; j < n; j++) {
            if (array[j] == 1) 
                cnt++;
            else if (array[j] == 0 && check) {
                cnt++;
                check = false;
            }
            else if (array[j] == 0 && !check) {
                if (max < cnt)
                    max = cnt;
                break;
            }
        }
        if (max < cnt)
            max = cnt;
    }
    cout << max << endl;
    return 0;
}