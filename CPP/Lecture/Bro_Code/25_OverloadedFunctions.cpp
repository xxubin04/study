#include <iostream>

void bakePizza();   // 매개변수의 개수에 따라 호출되는 함수 달라짐
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main() {
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("cheese", "mushroom");
    
    return 0;
}

void bakePizza() {
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping1) {
    std::cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}