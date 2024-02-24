#include <iostream>
#include <cmath>

int main()
{
    double x = 3.14;
    double y = 4;
    double z;
    double m;

    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(2, 4);
    // z = sqrt(9);
    // z = abs(-5);
    z = round(x);   // 3
    z = ceil(x);    // 4
    z = floor(x);   // 3

    std::cout << z;

    return 0;
}