#include<iostream>
#include<string>

int main() {
    int N;
    int cnt = 0;
    int num = 666;

    std::cin >> N;

    while (true) {
        std::string s = std::to_string(num);
        
        if(s.find("666") != std::string::npos) cnt++;

        if(N == cnt) break;

        num++;
    }

    std::cout << num;

    return 0;
}