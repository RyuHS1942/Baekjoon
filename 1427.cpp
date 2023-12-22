#include<iostream>


int main() {
    int N;
    int digit[11] = {0,};

    std::cin >> N;

    int i=0;
    while (N != 0) {
        digit[i] = N%10;
        N = N/10;
        i++;
    }

    for(int j=0;j<i-1;j++) {
        for(int k=j;k<i;k++) {
            if(digit[j] < digit[k]) {
                int temp = digit[j];
                digit[j] = digit[k];
                digit[k] = temp;
            }
        }
    }

    for(int j=0;j<i;j++) {
        std::cout << digit[j];
    }
    
    return 0;
}