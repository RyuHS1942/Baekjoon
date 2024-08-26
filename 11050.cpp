#include<iostream>
#include<math.h>

int factorial(int n) {
    if(n<=1) return 1;
    else return n*factorial(n-1);
}

int main() {
    int N;
    int K;

    std::cin >> N >> K;

    std::cout << factorial(N)/(factorial(K)*factorial(N-K));
}