#include<iostream>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int N;
    int M;
    int input;
    int output;
    
    std::cin >> N;

    //구조
    int structure[N];
    for(int i=0;i<N;i++) {
        std::cin >> input;

        structure[i] = input;
    }

    //인수
    int data[N];
    for(int i=0;i<N;i++) {
        std::cin >> input;

        data[i] = input;
    }
    
    std::cin >> M;

    int C[M];
    for(int i=0;i<M;i++) {
        std::cin >> input;
        
        C[i] = input;
    }
    
    for(int j=0;j<M;j++) {
        output = C[j];

        for(int i=0;i<N;i++) {
            if(structure[i] == 0) {
                int temp = output;
                output = data[i];
                data[i] = temp;
            }
        }
    
        std::cout << output << " ";
    }


}