#include<iostream>

int main() {
    char word[101] = "";
    int N = 0;
    int words = 0;
    int index = 0;

    std::cin >> N;
    words = N;

    for(int i=0;i<N;i++) {
        std::cin >> word;

        for(int j=0;j<100;j++) {
            if(word[j+1] == '\0') break;

            //std::cout << "word[j], word[j+1] : " << word[j] << ", " << word[j+1] << std::endl;
            if(word[j] != word[j+1]) {
                index = 0;
                for(int k=j+2;k<100;k++) {
                    if(word[k] == '\0') break;

                    //std::cout << "word[j], word[k] : " << word[j] << ", " << word[k] << std::endl;
                    if(word[j] == word[k]) {
                        index = 1;
                        break;
                    }
                }
                if(index == 1) {
                    //std::cout << "word--" << std::endl;
                    words--;
                    break;
                }
            }
        }
    }

    std::cout << words;
}