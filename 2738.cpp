#include<iostream>

int main() {
    int N, M;
    int e;

    std::cin >> N >> M;
    int array[N][M];
    int array2[N][M];
    int result[N][M];

    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            std::cin >> e;
            array[i][j] = e;
        }
    }

    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            std::cin >> e;
            array2[i][j] = e;
        }
    }

    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            std::cout << array[i][j] + array2[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}