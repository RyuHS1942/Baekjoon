#include<iostream>

int main() {
    int F = -1;
    int S = -1;

    while (true)
    {
        std::cin >> F >> S;

        if (F == 0 && S == 0) break;

        if (F == 0 || S == 0) std::cout << "neither" << std::endl;

        if(S%F == 0) std::cout << "factor" << std::endl;
        else if(F%S == 0) std::cout << "multiple" << std::endl;
        else std::cout << "neither" << std::endl;
    }
    
    return 0;
}