#include <iostream>

void happyBirthday(std::string birthdaygirl, int age);

int main()
{
    // function = a block of reusable code

    std::string name = "yubin";
    int age = 21;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string birthdaygirl, int age) {   // 다른 함수의 매개변수 받아오기 (main 안에 변수 존재)
    std::cout << "Happy Birthday to " << birthdaygirl << '\n'; 
    std::cout << "Happy Birthday to " << birthdaygirl << '\n';
    std::cout << "Happy Birthday dear " << birthdaygirl << '\n';
    std::cout << "Happy Birthday to " << birthdaygirl << '\n';
    std::cout << "You are " << age << " years old\n";
}