#include<iostream>

int main() {
    int N;
    int room = 1;

    std::cin >> N;

    int i=1;
    while(N > room) {
        room += 6*i;
        i++;
    }

    std::cout << i; 
    return 0;
}