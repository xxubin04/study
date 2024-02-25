#include <iostream>

int main() 
{
    // ternary operator (삼항 연산자) ?: = replacment to an if/else statement
    // condition ? expression1 : expressino2;

    int grade = 75;

    // if (grade >= 60)
    // {
    //     std::cout << "You pass!";
    // }
    // else 
    // {
    //     std::cout << "You fail!";
    // }

    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    return 0;
}