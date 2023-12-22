#include<iostream>

//약수의 갯수가 홀수인 N이내의 수를 구하여라
int main() {
	std::ios_base::sync_with_stdio(false);  //표준 스트림 동기화 해제
	std::cin.tie(NULL); std::cout.tie(NULL);//입력과 출력 연결 끊기
    
    int N;
    int result = 0;

    std::cin >> N;

    for(int i=1;i*i<=N;i++) {
        result++;
    }

    std::cout << result;

    return 0;
}