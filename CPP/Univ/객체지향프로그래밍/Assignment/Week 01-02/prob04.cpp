#include <iostream>

using namespace std;

int main() {
    int a, b, c, temp;
    int num[3] = {};
    
    cin >> a >> b >> c;
    num[0] = a;
    num[1] = b;
    num[2] = c;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (num[j] > num[j+1]) {
                temp = num[j]; 
                num[j] = num[j+1];
                num[j+1] = temp;           
            }
        }
    }

    a = num[0];
    b = num[1];
    c = num[2];

    cout << a << b << c << endl;
}