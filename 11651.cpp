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
        p.first = y;
        p.second = x;
        s.insert(p);
    }

    for(std::pair<int,int> temp : s) 
        std::cout << temp.second << " " << temp.first << "\n";

    return 0;
}