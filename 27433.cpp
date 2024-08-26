#include<iostream>

int main() {
    int N;
    long output = 1;

    std::cin >> N;

    for(int i=N;i>0;i--) {
        output *= i;
    }

    std::cout << output;
}