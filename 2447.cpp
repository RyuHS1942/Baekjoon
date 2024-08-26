#include<iostream>
#include<vector>

void MakePattern(int i, int j, int n) {
    if((i/n)%3 == 1 && (j/n)%3 == 1) {
        std::cout << " ";
    } else {
        if(n/3 == 0) {
            std::cout << "*";
        } else {
            MakePattern(i, j, n/3);
        }
    }
}

int main() {
    int N;
    std::cin >> N;
    
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            MakePattern(i, j, N);
        }
        std::cout << "\n";
    }

}