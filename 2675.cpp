#include <iostream>

int main() {
    char S[21] = {0};
    int T = 0;
    int R = 0;

    std::cin >> T;

    for(int t=0;t<T;t++) {
        std::cin >> R;
        std::cin >> S;

        int i=0;
        while(S[i] != '\0') {
            for(int r=0;r<R;r++) {
                std::cout << S[i];
            }
            i++;
        }
        std::cout << "\n";
    }
}