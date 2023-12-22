#include<iostream>

int main() {
    int B = 0;
    char N[1024] = {"0", };
    int result = 0;

    std::cin >> N >> B;

    int i = 0;
    while(N[i] != '\0') {
        //std::cout << "N[i] : " << N[i] << std::endl;
        if(N[i] < 65) {
            result = result * B;
            result += N[i] - 48;
            //std::cout << "result : " << result << std::endl;
        } else {
            result = result * B;
            result += N[i] - 55;
            //std::cout << "result : " << result << std::endl;
        }
        i++;
    }

    std::cout << result;

    return 0;
}