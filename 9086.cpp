#include <iostream>

int main() {
    int T = 0;
    char input[1001];

    std::cin >> T;
    for(int t=0;t<T;t++){
        std::cin >> input;
        int i = 0;
        while(input[i] != '\0') {
            i++;
        }
        std::cout << input[0] << input[i-1] << std::endl;
    }
}