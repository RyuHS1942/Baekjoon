#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>

void function1(std::vector<int> v, int N) {
    int output;
    int sum = std::accumulate(v.begin(), v.end(), 0);

    output = round((float) sum / N);
    std::cout << output << "\n";
}

void function2(std::vector<int> v, int N) {
    std::cout << v[N/2] << "\n";
}

void function3(std::vector<int> v, int N) {
    //
}

void function4(std::vector<int> v) {
    std::cout << v.back() - v.front();
}

int main() {
    int N;
    int input;
    std::vector<int> v;

    std::cin >> N;

    for(int i=0;i<N;i++) {
        std::cin >> input;

        v.push_back(input);
    }
    
    std::sort(v.begin(), v.end());

    function1(v, N);
    function2(v, N);
    function3(v, N);
    function4(v);
}