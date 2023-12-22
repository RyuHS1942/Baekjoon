#include<iostream>

int main() {
    char word[101] = "";
    char temp;
    int length = 0;
    int index = 0;

    std::cin >> word;
    
    for(char character:word) {
        if(character == '\0') break;

        length++;

        if(index == 1) if(character == '=') {
            length--;
            index = 0;
        } else index = 0;

        if(character == '=' && index == 0) if(temp == 'c' || temp == 's' || temp == 'z') length--;
        if(character == '-') if(temp == 'c' || temp == 'd') length--;
        if(character == 'j') if(temp == 'l' || temp == 'n') length--;
        if(character == 'z') if(temp == 'd') index = 1;

        temp = character;
   }

    std::cout << length;
}