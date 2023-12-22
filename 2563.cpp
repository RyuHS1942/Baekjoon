#include<iostream>

int main() {
    int white[100][100] = {0,};
    int num = 0;
    int width, height = 0;
    int count = 0;

    std::cin >> num;

    for(int i=0;i<num;i++) {
        std::cin >> width >> height;

        for(int j=height-1;j<height+9;j++) {
            for(int k=width-1;k<width+9;k++) {
                white[j][k] = 1;
            }
        }
    }

    for(int i=0;i<100;i++) {
        for(int j=0;j<100;j++) {
            if(white[i][j] == 1) count++;
        }
    }

    std::cout << count;
    return 0;
}