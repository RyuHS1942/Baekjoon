#include<iostream>
#include<map>

int main() {
    int a, b;
    int input;
    std::map<int,int> A;
    int result = 0;
    
    std::cin >> a >> b;

    for(int i=0;i<a;i++) {
        std::cin >> input;
        A[input] = 0;
    }

    result = A.size();

    for(int i=0;i<b;i++) {
        std::cin >> input;
        if(A.find(input) == A.end()) result++;
        else result--;
    }

    std::cout << result;

    return 0;
}