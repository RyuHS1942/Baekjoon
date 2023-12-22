#include<iostream>
#include<math.h>

int main() {
    int N;
    int M;
    int max = 0;

    std::cin >> N >> M;
    int num[M] = {'0',};

    for(int i=0;i<N;i++) {
        std::cin >> num[i];
    }

    for(int i=0;i<N-2;i++) {
        for(int j=i+1;j<N-1;j++) {
            for(int k=j+1;k<N;k++) {
                if(num[i] + num[j] + num[k] <= M) {
                    if(num[i] + num[j] + num[k] >= max) {
                        max = num[i] + num[j] + num[k];
                    }
                }
            }
        }
    }

    std::cout << max;

    return 0;
}