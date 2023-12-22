#include<iostream>
#include<algorithm>

int num[1000000];

int main() {
    int N;
    std::cin >> N;

    for(int i=0;i<N;i++) {
        std::cin >> num[i];
    }

    std::sort(num, num+N);

    for(int i=0;i<N;i++) {
        std::cout << num[i] << std::endl;
    }

    return 0;
}