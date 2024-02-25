#include <iostream>

int main()
{
    bool hungry = true;
    hungry ? std::cout << "You are hungry\n" : std::cout << "You are full\n";
    
    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}