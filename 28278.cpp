#include<iostream>

struct stack {
    int data = 0;
    struct stack *link = NULL;
};

int main() {
    std::ios_base::sync_with_stdio(false);  //표준 스트림 동기화 해제
	std::cin.tie(NULL); std::cout.tie(NULL);//입력과 출력 연결 끊기
    
    int N;
    int input;
    int X;
    int count = 0;
    stack *head = NULL;

    std::cin >> N;

    for(int i=0;i<N;i++) {
        std::cin >> input;

        switch(input) {
            case 1: {//push
                std::cin >> X;
                stack* newStruct = new stack;

                newStruct->data = X;

                if(head != NULL) {
                    newStruct->link = head;
                }

                head = newStruct;
                count++;

                break;
            } case 2: {//pop
                if(head == NULL)
                    std::cout << -1 << "\n";
                else {
                    std::cout << head->data << "\n";
                    head = head->link;
                    count--;
                }

                break;
            } case 3: {//count
                std::cout << count << "\n";

                break;
            } case 4: {//check
                if(head == NULL) std::cout << 1 << "\n";
                else std::cout << 0 << "\n";

                break;
            } case 5: {//view
                if(head == NULL) std::cout << -1 << "\n";
                else std::cout << head->data << "\n";

                break;
            }
        }
    }

    return 0;
}