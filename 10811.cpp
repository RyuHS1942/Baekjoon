#include <iostream>

void change(int array[], int i, int j) {
    int temp = 0;
    
    temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

int main() {
    int N, M = 0;
    int i, j = 0;

    std::cin >> N >> M;

    int array[N];           //바구니 갯수
    for(int n=0;n<N;n++) {
        array[n] = {n+1};
    }

    for(int m=0;m<M;m++) {
        std::cin >> i >> j;     //서로 자리 바꿀 위치

        while(i < j) {
            change(array, i-1, j-1);
            i++;
            j--;
        }
    }

    for(int i=0;i<N;i++) {
        std::cout << array[i] << " ";
    }

    return 0;
}
