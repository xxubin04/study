#include <iostream>

using namespace std;

int main()
{
    int count = 0;

    for (int x = 0; x <= 100; x++) {
        for (int y = x; y <= 100; y++) {
            if (x*x + y*y <= 10000) 
                count++;
        }
    }
    cout << "The number of points is " << count;

    return 0;
}