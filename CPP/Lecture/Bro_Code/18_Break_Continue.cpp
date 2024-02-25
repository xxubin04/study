#include <iostream>

int main()
{
    // break = break out of a loop
    // continue = skip current iteration

    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            continue;    //break = stop and finish at i / continue = skip at i and run until it finishes
        }
        std::cout << i << '\n';
    }

    return 0;
}