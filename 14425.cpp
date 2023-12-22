#include<iostream>
#include<map>

int main() {
    int N;
    int M;
    std::string input;
    std::map<std::string, std::string> S;
    int result = 0;

    std::cin >> N >> M;

    for(int i=0;i<N;i++) {
        std::cin >> input;

        S[input] = input;
    }

    for(int i=0;i<M;i++) {
        std::cin >> input;

        if(S.end() != S.find(input)) {
            result++;
        }
    }

    std::cout << result;

    return 0;
}