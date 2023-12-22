#include<iostream>

#define Quarter 25
#define Dime 10
#define Nickel 5
#define Penny 1

int main() {
    int T = 0;
    int C = 0;

    std::cin >> T;
    int result[T][4] = {0,};
    
    for(int i=0;i<T;i++) {
        std::cin >> C;
        while (C >= Quarter) {
            result[i][0] += 1;
            C -= Quarter;
        }
        while (C >= Dime)
        {
            result[i][1] += 1;
            C -= Dime;
        }
        while (C >= Nickel) {
            result[i][2] += 1;
            C -= Nickel;
        }
        while (C >= Penny)
        {
            result[i][3] += 1;
            C -= Penny;
        }

        for(int j=0;j<4;j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}