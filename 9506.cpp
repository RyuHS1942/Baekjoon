#include<iostream>

int main() {
    int n;

    while (true) {
        int divisor[100000] = {0,};
        int sum = 0;
        int cnt = 0;

        std::cin >> n;
        
        if(n == -1) break;

        //find divisor
        for(int i=1;i<n;i++) {
            if(n%(i) == 0) {
                divisor[cnt] = i;
                cnt++;
                sum += i;
            }
        }

        if(sum == n) {
            std::cout << n << " = " << divisor[0];
            for(int i=1;i<cnt;i++) {
                std::cout << " + " << divisor[i];
            }
            std::cout << std::endl;
        } else {
            std::cout << n << " is NOT perfect." << std::endl;
        }
    }

    return 0;
}