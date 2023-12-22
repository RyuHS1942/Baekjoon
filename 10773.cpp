#include<iostream>

struct node {
    int data = 0;
    node* nextNode = NULL;
};

int main() {
    int K;
    int input;
    node* head = NULL;
    int result = 0;

    std::cin >> K;

    for(int i=0;i<K;i++) {
        std::cin >> input;

        if(input == 0) head = head->nextNode; //pop
        else { //push
            node* newNode = new node;
            newNode->data = input;
            
            if(head != NULL)
                newNode->nextNode = head;

            head = newNode;
        }
    }

    if(head == NULL) {
        std::cout << result << "\n";
        return 0;
    }

    while(true) {
        result += head->data;
        if(head->nextNode == NULL) break;
        head = head->nextNode;
    }
    std::cout << result << "\n";
    return 0;
}