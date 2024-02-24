#include <iostream>

int main() {

    //integer (whole number)
    int age = 21;
    int year = 2024;
    int days = 7.5;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    //boolean (true or false)
    bool student = true;
    bool power = false;

    //string (objects that represents a sequence of text)
    std::string name = "Yubin";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << days << std::endl;
    std::cout << price << std::endl;
    std::cout << initial << std::endl;
    std::cout << student << std::endl;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
    return 0;
}
