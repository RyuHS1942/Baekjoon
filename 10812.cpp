#include<iostream>

int main() {
    int N, M;
    int i, j, k;


    std::cin >> N >> M;
    int array[N];
    int temp[N];
    for(int i=0;i<N;i++) {
        array[i] = i+1;
    }

    for(int i=0;i<M;i++) {
        std::cin >> i >> k >> j;

        for(int x=0;x<j-k;x++) {
            temp[x] = array[k+x];
        }

        for(int y=0;y<k-1;y++) {
            temp[j-k+y+1] = array[y];
        }

        for(int z=i;z<j;z++) {
            array[z] = temp[z];
        }
    }

    for(int i=0;i<N;i++) {
        std::cout << temp[i] << " ";
    }
}