#include<iostream>
#include<deque>

int main() {
    int N, K;
    std::deque<int> deque;
    std::deque<int>::iterator iter;

    std::cin >> N >> K;

    //insert
    for(int i=1;i<N+1;i++) deque.push_back(i);

    int k = K;
    std::cout << "<";
    while(deque.size() > 1) {
        if(k != 1) {
            deque.push_back(deque.front());
            deque.pop_front();
            k--;
        } else {
            std::cout << deque.front() << ", ";
            deque.pop_front();
            k = K;
        }
    }

    std::cout << deque.front() << ">";
}