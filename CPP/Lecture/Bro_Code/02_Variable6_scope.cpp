#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {
    // int x = 0;    -> using의 앞뒤 어디든지 상관없이 0 출력하게 됨
    using namespace first;

    std::cout << x << '\n'; 
    return 0;

    // namespace = provides a solution for preventing name conflicts in large projects.
    //             Each entity needs a unique name.
    //             A namespace allow for identically named entities 
    //             as long as the namespaces are different.
}
