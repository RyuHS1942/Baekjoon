#include<iostream>
#include<queue>

int main() {
    int N;
    std::queue<int> queue;

    std::cin >> N;

    for(int i=1;i<N+1;i++) queue.push(i);

    while(queue.size() > 1) {
        queue.pop();
        queue.push(queue.front());
        queue.pop();
    }

    std::cout << queue.front(); 
}