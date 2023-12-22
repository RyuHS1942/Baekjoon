#include<iostream>

int main() {
    char subject[51] = "";  //과목명
    char grade[2] = "";     //등급
    double credit = 0;      //과목 학점

    double sum_credit = 0;  //총 학점
    double point = 0;       //총 점수

    for(int i=0;i<20;i++) {
        std::cin >> subject >> credit >> grade;
        
        if(grade[0] != 'P') {
            sum_credit += credit;
            point += credit * ((grade[0] == 'A') ? ((grade[1] == '+') ? 4.5 : 4.0) : (grade[0] == 'B') ? ((grade[1] == '+') ? 3.5 : 3.0) : (grade[0] == 'C') ? ((grade[1] == '+') ? 2.5 : 2.0) : (grade[0] == 'D') ? ((grade[1] == '+') ? 1.5 : 1.0) : 0);
        }
    }

    std::cout << point / sum_credit;

    return 0;
}