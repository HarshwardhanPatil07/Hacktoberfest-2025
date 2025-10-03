#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of rows for the butterfly pattern: ";
    std::cin >> n;

    
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }

        
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            std::cout << " ";
        }

        
        for (int j = i; j >= 1; j--) {
            std::cout << j;
        }
        std::cout << std::endl;
    }

    
    for (int i = n; i >= 1; i--) {
        
        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }

        
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            std::cout << " ";
        }

        
        for (int j = i; j >= 1; j--) {
            std::cout << j;
        }
        std::cout << std::endl;
    }

    return 0;
}