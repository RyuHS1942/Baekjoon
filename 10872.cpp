#include<iostream>

int main() {
    int N;
    int output = 1;

    std::cin >> N;

    for(int i=0;i<=N;i++) {
        if(i==0) output = 1;
        else output = output * i;
    }

    std::cout << output;
}