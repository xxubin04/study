#include <iostream>

int main() 
{
    // type conversion = conversion a value of one data type to another
    // Implicit = automatic
    // Explicit = precede value with new data type

    // char x = 100;  // d

    // std::cout << x;

    int correct = 8;
    int questions = 10;
    double score = (double) correct / questions * 100;

    std::cout << score << "%";

    return 0;
}