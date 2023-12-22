#include<iostream>

int main() {
    int side[3] = {0,};
    int max;

    std::cin >> side[0] >> side[1] >> side[2];

    for(int i=0;i<3;i++) {
        for(int j=i+1;j<3;j++) {
            if(side[i] > side[j]) {
                int temp = side[i];
                side[i] = side[j];
                side[j] = temp;
            }
        }
    }

    if(side[0] + side[1] > side[2]) {
        std::cout << side[0] + side[1] + side[2];
    } else std::cout << (side[0] + side[1]) * 2 - 1;

    return 0;
}