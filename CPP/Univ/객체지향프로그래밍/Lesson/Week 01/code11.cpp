#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int N;

    cin >> N;

    while (N > 0) {
        sum += (N % 10);
        N /= 10;
    }
    cout << "The sum is " << sum << endl;
    return 0;
    
    // while(true) {
    //     sum += N % 10;
    //     N /= 10;
        
    //     if (N / 10 == 0) {
    //         sum += N % 10;
    //         N /= 10;
            
    //         cout << sum;
    //         break;
    //     }
    // }
    
}