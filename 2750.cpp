#include<iostream>

int main() {
    int N;

    std::cin >> N;

    int* array = new int[N];

    for(int i=0;i<N;i++) {
        std::cin >> array[i];
    }

    for(int i=0;i<N-1;i++) {
        for(int j=i;j<N;j++) {
            if(array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for(int i=0;i<N;i++) {
        std::cout << array[i] << std::endl;
    }
    return 0;
}