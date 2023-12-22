#include<iostream>

int main() {
    int grid[9][9];
    int input = 0;
    int max = -1;
    int row, col = 0;

    for(int i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            std::cin >> input;
            grid[i][j] = input;
            if(max < grid[i][j]) {
                max = grid[i][j];
                row = i+1;
                col = j+1;
            }
        }
    }

    std::cout << max << std::endl;
    std::cout << row << " " << col;

    return 0;
}