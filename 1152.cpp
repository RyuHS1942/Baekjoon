#include<iostream>

int main() {
    char S[1000001];
    int num = 0;


    std::cin.getline(S, 1000001);

    int i=0;
    while (S[i] != '\0')
    {
        if(S[i] == 32) num += 1;
        i++;
    }

    if(S[0] == 32) num -= 1;
    if(S[i-1] == 32) num -= 1;
    if(S[0] == 32 && i == 0) num = 0;

    std::cout << num+1;
}