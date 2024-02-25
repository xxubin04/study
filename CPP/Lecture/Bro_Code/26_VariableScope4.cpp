#include <iostream>

int myNum = 3;

void printNum();

int main()
{
    int myNum = 1;  // scope resolution operator = ::  
                    // when there are both local variable and global variable,
    printNum();     // '::variable' = global variable
    std::cout << ::myNum << '\n';

    return 0;       // 가능한 전역 변수는 사용하지 마라. It pollutes the global namespace
}

void printNum() {
    int myNum = 2;

    std::cout << ::myNum << '\n';
}