#include <iostream>

int main() {
    int N, M = 0;
    int i, j, k = 0;

    std::cin >> N >> M;
    int array[N] = {0}; 

    for(int b=0;b<M;b++) {
        std::cin >> i >> j >> k;
        for(int a=i-1;a<j;a++) {
            array[a] = k;
        }
    }

    for(int a=0;a<N;a++){
        std::cout << array[a] << " ";
    }
    return 0;
}