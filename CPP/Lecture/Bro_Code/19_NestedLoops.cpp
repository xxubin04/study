#include <iostream>

int main() {    // Nested Loops = 중첩 반복문

    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
        std::cout << symbol;
        }
        std::cout << '\n';
    }
    
    // for (int i = 1; i <= 3; i++) {
    //     for (int i = 1; i <= 10; i++) {   // 같은 i로 작성해도 결과값은 동일
    //     std::cout << i << ' ';
    //     }
    //     std::cout << '\n';
    // }

    return 0;
}