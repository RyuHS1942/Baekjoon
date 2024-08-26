#include<iostream>
#include<string.h>

int cnt = 0;

int recursion(const char *s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main() {
    int T;
    char S[1001];

    std::cin >> T;

    for(int i=0;i<T;i++) {
        std::cin >> S;

        std::cout << isPalindrome(S);
        std::cout << " " << cnt << "\n";

        cnt = 0;
    }
    return 0;
}