#include<iostream>

bool isPrime(int input) {

    if(input < 2) return false;
    if(input == 2) return true;
    if(input%2 == 0) return false;
    for(int i=3;i*i<=input;i++)
        if(input%i == 0) return false;
    
    return true;
}

int main() {
    int M, N;

    std::cin >> M >> N;

    for(int i=M;i<=N;i++) {
        if(isPrime(i)) std::cout << i << "\n";
    }

    return 0;
}