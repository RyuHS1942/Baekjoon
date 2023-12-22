#include<iostream>


int change(char w) {
    if(w >= 65 and w < 68) {
        return 3;
    } else if(w >=68 and w < 71) {
        return 4;
    } else if(w >= 71 and w < 74) {
        return 5;
    } else if(w >= 74 and w < 77) {
        return 6;
    } else if(w >= 77 and w < 80) {
        return 7;
    } else if(w >= 80 and w < 84) {
        return 8;
    } else if(w >= 84 and w < 87) {
        return 9;
    } else {
        return 10;
    }
}

int main() {
    int t = 0;
    char word[16] = {};
    int n = 0;

    std::cin >> word;

    int i = 0;
    while(word[i] != '\0') {
        n += change(word[i]);
        std::cout << n << std::endl;
        i++;
    }
    std::cout << n;

}