#include <iostream>

int main() {
    // array = a data structure that can hold multiple values
    //         values are accessed by an index number
    //         "kind of like a variable that holds multiple values"

    std::string car[] = {"Benz", "BMW", "Porsche"};

    std::cout << car << '\n';  // 참조값 반환
    
    for (int i = 1; i <= 3; i++) {
        std::cout << i << " ranking car: " << car[i-1] << std::endl;
    }

    return 0;
}