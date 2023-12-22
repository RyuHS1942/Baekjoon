#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

int main() {
    std::ios_base::sync_with_stdio(false); //표준 스트림 동기화 해제
	std::cin.tie(NULL); //입력과 출력 연결 끊기
    std::cout.tie(NULL);

    int N, M;
    std::string input;
    std::map<std::string, int> m;
    std::vector<std::string> result;

    std::cin >> N >> M;

    for(int i=0;i<N;i++) {
        std::cin >> input;
        m[input] = 1;
    }

    for(int i=0;i<M;i++) {
        std::cin >> input;

        if(m.find(input) != m.end()) {
            result.push_back(input);
        }
    }

    sort(result.begin(), result.end());

    std::cout << result.size() << "\n";

    for(int i=0;i<result.size();i++) {
        std::cout << result[i] << "\n";
    }

    return 0;
}