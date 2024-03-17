# include <iostream>

int main() {
    int n;
    int fibonacci[31] = {1, 1};

    std::cin >> n;
    
    for (int i = 2; i <= n; i++) {
        fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
    }

    std::cout << fibonacci[n];

    return 0;
}