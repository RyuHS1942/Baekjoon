#include<iostream>

int main() {
    int N = 0;
    int B = 0;
    char result[30] = {0,};

    std::cin >> N >> B;
    int temp = N;
    int i = 0;

    while(temp/B > 0) {
        if(temp%B > 9) {
            result[i] = char(temp%B + '0' + 7);
        } else result[i] = temp%B + '0';
        i++;
        temp = temp/B;
    }
    if(temp%B > 9) {
        result[i] = char(temp%B + '0' + 7);
    } else result[i] = temp%B + '0';

    for(;i>=0;i--) {
        std::cout << result[i];
    }

    return 0;
}