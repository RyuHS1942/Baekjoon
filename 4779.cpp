#include<iostream>
#include<vector>
#include<math.h>

void ShowSet(std::vector<char>& v) {
    for(int i=0;i<v.size();i++) {
        std::cout << v[i];
    }
    std::cout << "\n" << std::flush;
}

void MakeSet(std::vector<char>& v, int N) {
    for(int i=0;i<N;i++) {
        v[i] = '-';
    }
}

void ChangeSet(std::vector<char>& v, int begin, int end) {
    int length = end - begin;

    if(length <= 1) return;

    for(int i=begin + length/3;i<begin + 2*length/3;i++) {
        v[i] = ' ';
    }

    ChangeSet(v, begin, begin + length/3);
    ChangeSet(v, begin + 2 * (length/3), end);
}

int main() {
    int N;

    while(true){
        std::cin >> N;
        int num = pow(3, N);
        
        if(std::cin.eof()) break;

        std::vector<char> v(num);
        MakeSet(v, num);
        
        ChangeSet(v, 0, num);

        ShowSet(v);
    }
}