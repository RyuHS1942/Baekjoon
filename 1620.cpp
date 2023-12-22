#include<iostream>
#include<map>
#include<cctype>

int main() {
    std::ios_base::sync_with_stdio(false); //표준 스트림 동기화 해제
	std::cin.tie(NULL); //입력과 출력 연결 끊기
    std::cout.tie(NULL);
    
    int N, M;
    std::string input;
    std::map<int, std::string> m1;
    std::map<std::string, int> m2;

    std::cin >> N >> M;

    //도감
    for(int i=0;i<N;i++) {
        std::cin >> input;

        m1[i] = input;
        m2[input] = i;
    }

    //맞출 문제
    for(int i=0;i<M;i++) {
        std::cin >> input;

        if(isdigit(input[0]))
            std::cout << m1[stoi(input)-1] << "\n";
        else
            std::cout << m2[input]+1 << "\n";
    }

    return 0;
}