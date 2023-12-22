#include<iostream>
#include<vector>
#include<algorithm>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int gcd(int a, int b) {
    if(a > b) swap(a, b);

    while (b != 0) {
        if(a > b) swap(a, b);
        b = b%a;
    }

    return a;
}

int main() {
    int N;
    int input;
    std::vector<int> v;
    std::vector<int> distance;
    
    std::cin >> N;

    for(int i=0;i<N;i++) {
        std::cin >> input;

        v.push_back(input); 
    }

    sort(v.begin(), v.end());

    for(int i=0;i<N-1;i++) distance.push_back(v[i+1] - v[i]);

    int result = distance[0];
    for(int i=1;i<distance.size();i++) {
        if(result > gcd(result, distance[i])) result = gcd(result, distance[i]);
    }

    std::cout << (v[N-1] - v[0]) / result - v.size() + 1;

    return 0;
}