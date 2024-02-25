#include <iostream>
#include <string>  //getline 오류날때 추가

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    if (name.length() > 12) {
        std::cout << "Your name can't be over 12 characters";
    }
    else {
        std::cout << "Welcome " << name << '\n';
    }

    if (name.empty()) {
        std::cout << "You didn't enter your name";
    }
    else {
        std::cout << "Hello " << name << '\n';
    }

    // name
    // name.clear();

    // std::cout << "Hello" << name;
    

    // name.append("@gmail.com");

    // std::cout << "Your username is now " << name << '\n';


    std::cout << name.at(0) << '\n';   // print the index 0 


    name.insert(0, "^^");   // insert "^^" in the index 0 and print 'name'
    std::cout << name << '\n';


    name.erase(0, 3);  // erase the 3 words starting the index 0

    std::cout << name;

    return 0;
}