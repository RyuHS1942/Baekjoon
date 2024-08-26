#include<iostream>
#include<queue>
#include<string>

int main() {
    std::ios_base::sync_with_stdio(false); //표준 스트림 동기화 해제
	std::cin.tie(NULL); //입력과 출력 연결 끊기

    int N;
    std::string command;
    std::string command_f;
    std::queue<int> queue;

    std::cin >> N;
    std::cin.ignore();

    for(int i=0;i<N;i++) {
        getline(std::cin, command);

        command_f = command.substr(0, command.find(" "));

        if("push" == command_f) {
            int num = stoi(command.substr(command.find(" ")+1, command.size()));
            queue.push(num);
        }

        if("front" == command_f) {
            if(queue.size() <= 0) std::cout << -1 << "\n";
            else std::cout << queue.front() << "\n";
        }

        if("back" == command_f) {
            if(queue.size() <= 0) std::cout << -1 << "\n";
            else std::cout << queue.back() << "\n";
        }

        if("size" == command_f) std::cout << queue.size() << "\n";

        if("empty" == command_f) std::cout << queue.empty() << "\n";

        if("pop" == command_f) {
            if(queue.size() <= 0) std::cout << -1 << "\n";
            else {
                std::cout << queue.front() << "\n";
                queue.pop();
            }
        }
    }
}