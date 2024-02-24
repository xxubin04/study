// #include <iostream>

// int main() 
// {
//     std::string name;
//     int age;

//     std::cout << "What's your name?: ";
//     std::getline(std::cin, name);   // 입력하는 것에 공백이 들어간다면 getline() 써야 넘어가지 않음

//     std::cout << "What's your age?: ";
//     std::cin >> age;

//     std::cout << "Hello " << name << '\n';
//     std::cout << "You are " << age << " years old";

//     return 0;
// }


// #include <iostream>

// int main() 
// {
//     std::string name;
//     int age;

//     std::cout << "What's your age?: ";
//     std::cin >> age;

//     std::cout << "What's your name?: ";
//     std::getline(std::cin, name);   // 입력하는 것에 공백이 들어간다면 getline() 써야 넘어가지 않음

//     std::cout << "Hello " << name << '\n';
//     std::cout << "You are " << age << " years old";

//     return 0;
// }

#include <iostream>

int main() 
{
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your name?: ";
    std::getline(std::cin >> std::ws, name);   // 입력하는 것에 공백이 들어간다면 getline() 써야 넘어가지 않음
    
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}