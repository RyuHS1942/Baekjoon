#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    int N;
    int input;
    std::vector<int> v;

    std::cin >> N;

    for(int i=0;i<N;i++) {
        std::cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    if(v.size() == 1) std::cout << v[0] * v[0];
    else std::cout << v.front() * v.back();
}