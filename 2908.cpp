#include<iostream>

int main() {
    int a = 0, b = 0;


    std::cin >> a;
    std::cin >> b;

    if(a%10 > b%10) {
        std::cout << a%10 << a/10%10 << a/100 << std::endl;
    } else if (a%10 < b%10) {
        std::cout << b%10 << b/10%10 << b/100 << std::endl;
    } else {
        if(a/10%10 > b/10%10) {
            std::cout << a%10 << a/10%10 << a/100 << std::endl;
        } else if (a/10 < b/10) {
            std::cout << b%10 << b/10%10 << b/100 << std::endl;
        } else {
            if(a/100 > b/100) {
                std::cout << a%10 << a/10%10 << a/100 << std::endl;
            } else {
                std::cout << b%10 << b/10%10 << b/100 << std::endl;
            }
        }
    }
}