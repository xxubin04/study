#include <iostream>

int main() {

    // arithmetic operators = return the result of a specific
    //                        arithmetic operation (+ - * /)

    // order :
    // parenthesis (괄호)
    // multiplication & division
    // addition & subtraction

    int students = 20;

    // students = students + 1;
    // students += 1;
    // students++;

    // studens = students - 1;
    // students -= 1;
    // students--;

    // students = students * 2;
    // students *= 2;

    // students = students / 2;
    // students /= 2;
    
    // students = students / 3;
    // students /= 3;

    int remainder = students % 3;  // 나머지
    int num = 6 - 5 + 4 * 3 / 2;

    std::cout << remainder << '\n';
    std::cout << num;

    return 0;
}
