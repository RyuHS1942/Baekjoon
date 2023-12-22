#include<iostream>

int main() {
    int M, N;
    int min;
    int sum = 0;

    std::cin >> M;
    std::cin >> N;

    for(int i=N;i>=M;i--) {
        int cnt = 0;

        //find prime num
        for(int j=1;j<i;j++) {
            if(i%j == 0) {
                cnt++;
            }
        }

        if(cnt == 1) {
            sum += i;
            min = i;
        }
    }

    if(sum == 0) {
        std::cout << "-1" << std::endl;
    } else {
        std::cout << sum << std::endl;
        std::cout << min;
    }
    return 0;
}