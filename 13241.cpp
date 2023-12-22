#include<iostream>

long long gcd(long long a, long long b) {
    long long divisor;

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
    long long int A, B;

    std::cin >> A >> B;

    std::cout << (A * B) / gcd(A, B);

    return 0;
}