#include<iostream>

int main() {
    int N;
    int x, y;
    int minx = 100000;
    int miny = 100000;
    int maxx = -100000;
    int maxy = -100000;

    std::cin >> N;

    for(int i=0;i<N;i++) {
        std::cin >> x >> y;
        if(x < minx) minx = x;
        if(y < miny) miny = y;
        if(x > maxx) maxx = x;
        if(y > maxy) maxy = y;
    }

    std::cout << (maxx - minx) * (maxy - miny);

    return 0;
}