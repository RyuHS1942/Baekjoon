#include<iostream>

int main() {
    int f, s, t;

    while(true) {
        std::cin >> f >> s >> t;

        if(f == 0 && s == 0 && t == 0) {
            break;
        }

        if(f + s <= t || f + t <= s || s + t <= f) {
            std::cout << "Invalid" << std::endl;
        } else if(f == s && f == t && s == t) {
            std::cout << "Equilateral" << std::endl;
        } else if(f == s || f == t || s == t) {
            std::cout << "Isosceles" << std::endl;
        } else {
            std::cout << "Scalene" << std::endl;
        }
    }

    return 0;
}