#include<iostream>

int main() {
    char words[5][16] ={0,};
    char character;

    for(int i=0;i<5;i++) {
        for(int j=0;j<16;j++) {
            character = std::cin.get();
            if(character == '\n') break;
            words[i][j] = character;
        }
    }

    for(int j=0;j<16;j++) {
        for(int i=0;i<5;i++) {
            if(words[i][j] == '\0') continue;
            std::cout << words[i][j];
        }
    }

    return 0;
}