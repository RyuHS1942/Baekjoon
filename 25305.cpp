#include<iostream>

int main() {
    int N;
    int k;

    std::cin >> N >> k;
    int x[N] = {'0',};

    for(int i=0;i<N;i++) {
        std::cin >> x[i];
    }

    for(int i=0;i<N-1;i++) {
        for(int j=i;j<N;j++) {
            if(x[i] < x[j]) {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    std::cout << x[k-1];

    return 0;
}