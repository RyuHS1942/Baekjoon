#include<iostream>
#include<vector>
#include<map>

int main() {
    std::ios_base::sync_with_stdio(false); //표준 스트림 동기화 해제
	std::cin.tie(NULL); //입력과 출력 연결 끊기
    std::cout.tie(NULL);
    
    int N;
    int M;
    int num;
    std::map<int,int> m;

    std::cin >> M;

    for(int i=0;i<M;i++) {
        std::cin >> num;

        m[num] = num;
    }

    std::cin >> N;

    for(int i=0;i<N;i++) {
        std::cin >> num;

        if(m.end() == m.find(num)) {
            std::cout << "0 ";
        } else {
            std::cout << "1 ";
        }
    }

    return 0;
}