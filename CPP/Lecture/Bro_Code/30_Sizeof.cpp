#include <iostream>

int main() {
    // sizeof() = determines the size in bytes of a:
    //            variable, data type, class, objects, etc.

    double gpa = 2.5;                                // 8
    std::string name = "mcdonald";                   // 24
    std::string sentence = "I will be the CEO";      // 24
    char grade = 'F';                                // 1
    bool student = true;                             // 1
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};  // 6
    std::string word = "A";                          // 24
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(sentence) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(word) << " bytes\n";

    std::cout << sizeof(grades)/sizeof(char) << " elements\n";  // 배열의 크기 출력  // 6
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";             // 3
    return 0;
}