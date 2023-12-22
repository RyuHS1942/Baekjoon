#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

bool comp(std::string a, std::string b) {
    return a > b;
}

int main() {
    std::ios_base::sync_with_stdio(false); //표준 스트림 동기화 해제
	std::cin.tie(NULL); //입력과 출력 연결 끊기
    std::cout.tie(NULL);

    int n, i;
    std::string input;
    std::string state;
    std::map<std::string, std::string, std::greater<std::string>> m;

    std::cin >> n;

    for(i=0;i<n;i++) {
        std::cin >> input >> state;

        m[input] = state;
    }

    for(std::map<std::string, std::string>::iterator itr = m.begin();itr != m.end();++itr) {
        if(itr->second == "enter")
            std::cout << itr->first << "\n";
    }

    return 0;
}