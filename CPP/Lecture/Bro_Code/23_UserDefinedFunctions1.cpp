#include <iostream>

void happyBirthday() {  // defined function should be placed in front of the main() (when use it in main())
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear you!\n";
    std::cout << "Happy Birthday to you!\n";
}

int main()
{
    // function = a block of reusable code

    happyBirthday();
    happyBirthday();
    happyBirthday();

    return 0;
}