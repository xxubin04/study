#include <iostream>
#include <cmath>

using namespace std;
const int MAX = 100;

double stdDeviation(int array[], int x, double avg);

int main() {
    int n, j;
    int num[MAX] = {};
    double avg = 0, total = 0;

    cin >> n;
    
    for (int i = 0; i < n; i++) 
        cin >> num[i];

    for (int j = 0; j < n; j++) 
        total += num[j];
    
    avg = (double) total / n;

    cout.precision(5);
    cout << avg << " " << stdDeviation(num, n, avg) << endl;

    return 0;
}

double stdDeviation(int array[], int x, double avg) {
    double value = 0;
    for (int k = 0; k < x; k++) {
        value += pow((array[k] - avg), 2);
    }

    return sqrt((1.0 / x) * value);
}