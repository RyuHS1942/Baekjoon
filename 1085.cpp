#include<iostream>

int main() {
    int x, y, w ,h;
    int min = 0;

    std::cin >> x >> y >> w >> h;

    if(x <= w/2 && y <= h/2) {
        min = (x < y) ? x : y;
    } else if(x <= w/2 && h/2 < y) {
        min = x < h-y ? x : h-y;
    } else if(w/2 < x && y <= h/2) {
        min = w-x < y ? w-x : y;
    } else if(w/2 < x && h/2 <= y) {
        min = w-x < h-y ? w-x : h-y;
    }

    std::cout << min;

    return 0;
}