#include <iostream>

int main() {
    char S[100];
    int alphabet[26];
    
    for(int i=0;i<26;i++) {
        alphabet[i] = -1;
    }

    std::cin >> S;

    int i = 0;
    while (S[i] != '\0')
    {
        if(alphabet[S[i]-97] < 0) {
            alphabet[S[i]-97] = i;
        }
        i++;
    }
    
    for(int a=0;a<26;a++) {
        std::cout << alphabet[a] << " ";
    }
}