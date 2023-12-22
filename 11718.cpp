#include<iostream>

int main() {
    char input[10001];

    std::cin.getline(input, 10001, EOF);
    std::cout << input << std::endl;
}