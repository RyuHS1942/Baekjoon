#include<iostream>

int main() {
    int N, K;

    std::cin >> N >> K;

    int count=1;

    for(int i=1;i<=N;i++) {
        if((N%i == 0) && count == K) {
            std::cout << i;
            return 0;
        }
        if(N%i == 0) {
            count++;
        }
    }
    std::cout << "0";

    return 0;
}