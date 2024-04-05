#include <iostream>

using namespace std;
const int MAX = 100;

int main() {
    int n;
    int data[MAX];

    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> data[i];    // 2 4 2 4 5 1 로 한 줄로 작성해도 잘됨!
    
    int s;
    int count = 0;

    cin >> s;

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (data[i] + data[j] == s)
                count++;
        }
    }
    cout << count << endl;

    return 0;
}