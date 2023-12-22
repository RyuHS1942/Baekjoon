#include <iostream>

int main() {
    char input[101];

    std::cin >> input;

    int i = 0;
    while(input[i] != '\0'){
        i++;
    }
    std::cout << i << std::endl;
}