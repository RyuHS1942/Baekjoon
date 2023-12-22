#include<iostream>

int main() {
    char word[1000000] = "";
    int alpabet[26] = {0};


    std::cin >> word;

    //알파벳 갯수 체크
    for(int i=0;i<1000000;i++) {
        if(word[i] == '\0') break;

        if((int)word[i]>96) alpabet[word[i]-97] += 1;
        else alpabet[word[i]-65] += 1;
    }

    //최댓값 확인
    int max = 0;
    for(int j=0;j<26;j++) {
        if(max < alpabet[j]) max = alpabet[j];
    }

    //중복확인
    int count = 0;
    int index = 0;
    for(int k=0;k<26;k++) {
        if(max == alpabet[k]) {
            count++;
            index = k;
        }
    }

    if(count > 1){
        std::cout << "?";
    } else {
        std::cout << (char)(index + 65);
    }

    return 0;
}