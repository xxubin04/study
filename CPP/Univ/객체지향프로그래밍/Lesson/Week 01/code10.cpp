#include <iostream>

using namespace std;

int main() {
    int sum = 0, count = 0;
    int tmp;
    
    do {
        cin >> tmp;
        sum += tmp;
        count++;
    } while(sum > 0);


    // while(true) {
    //     cin >> tmp;
    //     sum += tmp;
    //     count++;
    //     if (sum <= 0) {
    //         break;
    //     }
    // }

    cout << "The count is " << count << endl;

    return 0;
}