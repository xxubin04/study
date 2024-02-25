#include <iostream>

int main() {

    std::string car[3];  // After the array's size is decided, the values are allocated

    car[0] = "Benz";
    car[1] = "Porsche";
    car[2] = "Ferrari";
    
    for (int i = 1; i <= 3; i++) {
        std::cout << i << " ranking car: " << car[i-1] << std::endl;
    }

    return 0;
}