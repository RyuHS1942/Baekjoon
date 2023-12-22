#include <iostream>

int main() {
    long sum = 0;
    long input = 0;

    for(int i=0;i<3;i++) {
        std::cin >> input;
        sum += input;
    }

    std::cout << sum << std::endl;
    
    return 0;
}