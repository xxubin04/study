#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string reversed_n = "";

    cin >> n;

    while (n != 0) {
        reversed_n += to_string (n % 10);
        n /= 10;
    }
    cout << reversed_n << endl;
    return 0;
}