#include<iostream>

int main() {
    int N;
    int min = 1000000;

    std::cin >> N;

    for(int i=1;i<N;i++) {
        int sum = 0;
        int temp = i;

        while(temp != 0) {
            sum += temp%10;
            temp = temp/10;
        }

        if(sum + i == N) {
            min = i;
            break;
        }
    }

    if(min == 1000000) std::cout << 0;
    else std::cout << min;

    return 0;
}