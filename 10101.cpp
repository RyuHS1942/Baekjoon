#include<iostream>

int main() {
    int angle1;
    int angle2;
    int angle3;

    std::cin >> angle1;
    std::cin >> angle2;
    std::cin >> angle3;

    if(angle1 + angle2 + angle3 != 180) {
        std::cout << "Error";
    } else if(angle1 == 60 && angle2 == 60 && angle3 == 60) {
        std::cout << "Equilateral";
    } else if(angle1 == angle2 || angle1 == angle3 || angle2 == angle3) {
        std::cout << "Isosceles";
    } else {
        std::cout << "Scalene";    
    }
    
    return 0;
}