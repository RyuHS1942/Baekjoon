#include<iostream>
#include<map>

int main() {
    std::ios_base::sync_with_stdio(false); //표준 스트림 동기화 해제
	std::cin.tie(NULL); //입력과 출력 연결 끊기
    std::cout.tie(NULL);

    int N , M;
    int input;
    std::map<int, int> m;
    int result[M] = {'0', };

    std::cin >> N;

    for(int i=0;i<N;i++) {
        std::cin >> input;

        if(m.find(input) == m.end()) m[input] = 1;
        else m[input] = m[input] + 1;
    }

    std::cin >> M;

    for(int i=0;i<M;i++) {
        std::cin >> input;

        result[i] = input;
    }

    for(int i=0;i<M;i++) {
        std::cout << m[result[i]] << " ";
    }
    return 0;
}