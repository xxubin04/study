#include <iostream>

int main()
{
    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // 1
    if (temp > 0 && temp < 30) {
        std::cout << "The temperature is good!\n";
    }
    else {
        std::cout << "The temperature is bad!\n";
    }

    // 2
    if (0 < temp < 30) {
        std::cout << "The temperature is good!\n";
    }
    else {
        std::cout << "The temperature is bad!\n";
    }

    // 3
    if (temp <= 0 || temp >= 30) {
        std::cout << "The temperature is bad!\n";
    }
    else {
        std::cout << "The temperature is good!\n";
    }

    // 4
    if (sunny) {
        std::cout << "It is sunny outside!\n";
    }
    else {
        std::cout << "It is cloudy outside!\n";
    }

    // 5
    if (!sunny) {
        std::cout << "It is cloudy outside!\n";
    }
    else {
        std::cout << "It is sunny outside!\n";
    }

    return 0;
}