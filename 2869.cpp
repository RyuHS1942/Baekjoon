#include<iostream>

int main() {
    int V;
    int A;
    int B;
    int day = 0;

    std::cin >> A >> B >> V;
    day = (V-A)/(A-B);

    if((V-A)%(A-B) != 0) day++;
    std::cout << day + 1;

    return 0;
}