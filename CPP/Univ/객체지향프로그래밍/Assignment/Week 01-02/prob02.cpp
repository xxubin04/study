#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n;

    cin >> n;
    cout << ((1 - pow(-0.5, n+1)) / 1.5) << '\n';

    return 0;
}