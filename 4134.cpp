#include<iostream>

bool isPrime(long long input) {

    if(input <= 1) return false;
    if(input == 2) return true;
    if(input % 2 == 0) return false;
    for(long long i=3;i*i<=input;i++)
        if(input%i == 0) return false;

    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);  //표준 스트림 동기화 해제
	std::cin.tie(NULL); std::cout.tie(NULL);//입력과 출력 연결 끊기
    
    int long n;
    long long input;

    std::cin >> n;

    for(int i=0;i<n;i++) {
        std::cin >> input;

        while(true) {
            if(isPrime(input)) {
                std::cout << input << "\n";
                break;
            }
            input += 1;
        }
    }
    return 0;
}