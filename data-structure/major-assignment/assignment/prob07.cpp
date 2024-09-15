#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 0;
    int cnt = 0;
    int* array = new int[10000];
    int array_size = 0;

    cin >> n;

    for (int i = 0; i <= n - 2; i++) {
        array[i] = i + 2;
    }

    array_size = n - 1;

    for (int i = 2; i <= n; i++) {
        bool exists = count(array, array + array_size, i);
        if (exists > 0) {
            for (int j = 0; j < array_size; j++) { 
                if (array[j] % i == 0 && array[j] != i) { 
                    cnt++;  
                }
                else {
                    array[j-cnt] = array[j];  
                }
            }
            array_size -= cnt; 
            cnt = 0;
        }
    }

    for (int i = 0; i < array_size; i++)
        cout << array[i] << " ";

    return 0;
}
