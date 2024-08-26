#include<iostream>
#include<deque>

int main() {
    int N;
    std::string command;
    std::string command_f;
    std::deque<int> deque;

    std::cin >> N;

    for(int i=0;i<N;i++) {
        getline(std::cin, command);

        command_f = command.substr(0, command.find(" "));

        if("1" == command_f) {
            int num = stoi(command.substr(command.find(" ")+1, command.size()));
            deque.push_front(num);
        }

        if("2" == command_f) {
            int num = stoi(command.substr(command.find(" ")+1, command.size()));
            deque.push_back(num);
        }

        if("3" == command_f) {
            if(deque.size() <= 0) std::cout << -1 << "\n";
            else {
                std::cout << deque.front() << "\n";
                deque.pop_front();
            }
        }

        if("4" == command_f) {
            if(deque.size() <= 0) std::cout << -1 << "\n";
            else {
                std::cout << deque.back() << "\n";
                deque.pop_back();
            }
        }

        if("5" == command_f) std::cout << deque.size() << "\n";

        if("6" == command_f) (deque.empty()) ? std::cout << 1 << "\n" : std::cout << 0 << "\n";

        if("7" == command_f) {
            if(deque.size() <= 0) std::cout << -1 << "\n";
            else std::cout << deque.front() << "\n";
        }
        
        if("8" == command_f) {
            if(deque.size() <= 0) std::cout << -1 << "\n";
            else std::cout << deque.back() << "\n";
        }
    }
}