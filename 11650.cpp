#include<iostream>
#include<set>

int N;
std::set<std::pair<int, int>> s;

int main() {
    int x, y;

    std::cin >> N;
    for(int i=0;i<N;i++) {
        std::cin >> x >> y;
        std::pair<int, int> p;
        p.first = x;
        p.second = y;
        s.insert(p);
    }

    for(std::pair<int,int> temp : s) 
        std::cout << temp.first << " " << temp.second << "\n";

    return 0;
}