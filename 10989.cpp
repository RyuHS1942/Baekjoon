#include<iostream>

int main() {
    std::ios_base::sync_with_stdio(false); //표준 스트림 동기화 해제
	std::cin.tie(NULL); //입력과 출력 연결 끊기

    int N;
    int input;
    int array[10001] = {0,};

    std::cin >> N;

    for(int i=0;i<N;i++) {
        std::cin >> input;
        array[input-1]++;
    }

    for(int i=0;i<10000;i++) {
        if(array[i] > 0) {
            for(int j=0;j<array[i];j++) {
                std::cout << i+1 << "\n";
            }
        }
    }
    return 0;
}