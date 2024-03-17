#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int tmp = 0;
    
    while(true) {
        cin >> tmp;
        if (tmp == -1) {
            break;
        }
        if (tmp%2 == 1) {
            sum += tmp;
        }
    }
    
    // do {
    //     cin >> tmp;
    //     if (tmp%2 == 1) {
    //         sum += tmp;
    //     }
    //     else {
    //         break;
    //     }
    // } while (tmp != -1);

    cout << "The sum is " << sum << endl;

    return 0;
}