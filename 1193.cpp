#include<iostream>

int main() {
    int X;

    std::cin >> X;

    int i=1;
    while(X-i > 0) {
        X -= i;
        i++;
    }

    if(i%2 == 0) {
        std::cout << X << "/" << i+1-X;
    } else {
        std::cout << i+1-X << "/" << X;
    }
    return 0;
}