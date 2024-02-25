#include <iostream>

void printNum(int myNum);

int main()
{
    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions

    int myNum = 1;    // local variable

    // std::cout << myNum;  

    printNum(myNum);

    return 0;
}

void printNum(int myNum) {
    std::cout << myNum;
}