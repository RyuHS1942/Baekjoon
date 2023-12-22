#include<iostream>
#include<cmath>

int main() {
    int N = 0;
    int point = 2;

    std::cin >> N;

    for(int i=0;i<N;i++) {
        point += pow(2,i);
    }

    std::cout << point*point;

    return 0;
}