#include <iostream>
#include <limits>

using namespace std;
const int MAX = 100;

int main() {
    int N;
    int max_value = numeric_limits<int>::min();
    int min_value = numeric_limits<int>::max();
    
    cin >> N;

    int data[MAX] = {};
    
    for (int i = 0; i < N; i++) {
        cin >> data[i];
        if (max_value < data[i])    max_value = data[i];
        if (min_value > data[i])    min_value = data[i];
        cout << max_value - min_value << " ";
    }
    return 0;
}