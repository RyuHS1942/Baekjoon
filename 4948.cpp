#include<iostream>

bool isPrime(int input) {

    if(input < 2) return false;
    if(input == 2) return true;
    if(input%2 == 0) return false;
    for(int i=3;i*i<=input;i++) if(input%i == 0) return false;

    return true;
}

int main() {
    int n;
    int input;
    int output;

    while(true) {
        std::cin >> input;
        output = 0;

        if(input == 0) break;

        for(int i=input+1;i<=input*2;i++) {
            if(isPrime(i)) output++;
        }

        std::cout << output << "\n";
    }

    return 0;
}