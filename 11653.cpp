#include<iostream>

int main() {
    int N;
    int factor = 2;

    std::cin >> N;

    while(N != 1) {

        if(N%factor == 0) {
            std::cout << factor << std::endl;
            N /= factor;
            factor = 2;
        }
        else factor++;
    }
    return 0;
}