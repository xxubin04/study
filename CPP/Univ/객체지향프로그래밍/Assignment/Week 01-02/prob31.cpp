#include <iostream>
#include <algorithm>

using namespace std;
const int MAX = 100;

int main() {
    int ans = 1, max = 0;
    int array[7] = {};

    for (int i = 0; i < 7; i++) 
        cin >> array[i];
    
    sort(array, array+7);

    for (int i = 0; i < 6; i++) {
        if (array[i+1] == array[i] + 1)
            ans++;
        else if (array[i+1] == array[i]) 
            continue;
        else {
            if (ans > max)
                max = ans;
            ans = 1;
        }
    }

    if (ans > max)
        max = ans;

    if (max >= 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}