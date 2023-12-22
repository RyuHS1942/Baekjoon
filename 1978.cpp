#include<iostream>

int main() {
    int N;
    int input;
    int result = 0;

    std::cin >> N;
    
    for(int i=0;i<N;i++) {
        std::cin >> input;
        int cnt = 0;

        //find prime num
        for(int i=1;i<input;i++) {
            if(input%i == 0) {
                cnt++;
            }
        }

        if(cnt == 1) result++;
    }

    std::cout << result;

    return 0;
}