#include <iostream>

int main() {
    char word[101] = "";
    int size = 0;

    std::cin >> word;

    for(int i=0;i<100;i++) {
        if(word[i] == '\0') {
            size = i;
            //std::cout << "size : " << size << std::endl;
            break;
        }
    }

    for(int i=0;i<size;i++) {
        if(word[i] != word[size-1-i]) {
            //std::cout << "word[i] : " << word[i] << " word[size-1-i] : " << word[size-1-i] << std::endl;
            std::cout << 0;
            return 0;
        }
    }
    std::cout << 1;
    return 0;
}