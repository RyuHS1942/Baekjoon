#include<iostream>

int main() {
    int sum = 0;
    int avg; int med;
    int array[5] = {'0', };

    for(int i=0;i<5;i++) {
        std::cin >> array[i];
        sum += array[i];
    }

    avg = sum/5;

    for(int i=0;i<4;i++) {
        for(int j=i;j<5;j++) {
            if(array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    std::cout << avg << std::endl;
    std::cout << array[2] << std::endl;


    return 0;
}