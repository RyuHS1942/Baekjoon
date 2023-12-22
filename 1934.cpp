#include<iostream>

int main() {
    int A, B;
    int T;
    int result;
    int j;

    std::cin >> T;

    for(int i=0;i<T;i++) {
        std::cin >> A >> B;
        
        result = 1;
        j = 2;
        while(true) {
            if(A == 1 || B == 1) break;
            else if(A%j == 0 && B%j == 0) {
                A = A/j;
                B = B/j;

                result *= j;
            } else {
                j++;
            }

            //std::cout << "A : " << A << " B : " << B << " result : " << result << "\n";
            if(j > A && j > B) break;
        }
        result *= A * B;

        std::cout << result << "\n";
    }

    return 0;
}