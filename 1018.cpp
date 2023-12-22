#include<iostream>

int main() {
    int N, M;
    int min = 64;
    char criterion[] = "WBWBWBWB";
    char criterion2[] = "BWBWBWBW";
    
    std::cin >> N >> M;

    char* board[N];

    for(int i=0;i<N;i++) {
        char *line = new char[M+1];
        std::cin >> line;

        board[i] = line;
    }

    for(int m=0;m<N-7;m++) {
        for(int k=0;k<M-7;k++) {
            int count = 0;
            int count2 = 0;
            
            for(int i=0;i<8;i++) {
                for(int j=0;j<8;j++) {
                    //1 시작
                    if(i%2 == 0 && board[i+m][j+k] != criterion[j]) count++;
                    if(i%2 == 1 && board[i+m][j+k] != criterion2[j]) count++;

                    //2시작
                    if(i%2 == 0 && board[i+m][j+k] != criterion2[j]) count2++;
                    if(i%2 == 1 && board[i+m][j+k] != criterion[j]) count2++;       
                }
            }

            if(count > count2) {
                if(count2 < min) min = count2;
            } else {
                if(count < min) min = count;
            }
        }
    }

    std::cout << min;
    return 0;
}