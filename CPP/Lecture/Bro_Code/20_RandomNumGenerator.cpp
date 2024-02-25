#include <iostream>
#include <time.h>

int main()
{
    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));  // If this sentence is not written, the random number can't print.
                        // rand() = generates NOT REAL random num

    int num = (rand() % 6) + 1; // 1 ~ 6 사이의 난수 발생

    std::cout << num;

    return 0;
}









