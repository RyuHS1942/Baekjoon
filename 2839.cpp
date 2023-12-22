#include<iostream>

int main() {
    int N;
    int sum = 0;
    int min = 5000/3;

    std::cin >> N;

    for(int i=0;i<=N/3;i++) {
        for(int j=0;j<=N/5;j++) {
            sum = 3*i + 5*j;
            if(N < sum) break;

            if(N == sum) {
                int temp = i + j;

                if(min > temp) min = i + j;
            }
        }
    }

    if(min == 5000/3) min = -1;
    std::cout << min;

    return 0;
}