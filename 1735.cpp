#include<iostream>

int gcd(int a, int b) {
    int divisor;

    if(a%b == 0 || b%a == 0) {
        if(a > b) divisor = b;
        else divisor = a;
    }

    while(a%b != 0 && b%a != 0) {
        if(a > b) {
            a = a%b;
            divisor = a;
        } else {
            b = b%a;
            divisor = b;
        }
    }

    return divisor;
}

int main() {
    int A, B;
    int C, D;
    int numerator;
    int denominator;

    std::cin >> A >> B;
    std::cin >> C >> D;

    numerator = (A * D) + (B * C);
    denominator = B * D;

    std::cout << numerator / gcd(numerator, denominator) << " " << denominator / gcd(numerator, denominator); 

    return 0;
}