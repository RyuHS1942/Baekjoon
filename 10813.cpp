#include <iostream>

int main() {
    int N, M = 0;
    int i, j = 0;

    std::cin >> N >> M;

    int array[N] = {0};
    for(int i=0;i<N;i++){
        array[i] = i+1;
    }

    for(int m=0;m<M;m++) {
        std::cin >> i >> j;
        int temp = array[i-1];
        array[i-1] = array[j-1];
        array[j-1] = temp;
    }

    for(int a=0;a<N;a++) {
        std::cout << array[a] << " ";
    }
    return 0;
}