#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
const int MAX = 10000000;
int main() {
    int N;
    int cnt = 0;
    cin >> N;

    string num;

    for (int i = 1; i <= N; i++) {
        num = to_string(i);   

        for (int j = 0; j < sizeof(num)/sizeof(char); j++) 
            if (num[j] == '0')    cnt++;
    }
    cout << cnt << endl;

    return 0;
}