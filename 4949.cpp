#include<iostream>
#include<stack>
#include<stdio.h>

int main() {
    std::string input;
    std::stack<char> s;
    std::string result;

    while(true) {
        getline(std::cin, input);
        result = "yes";

        if(input == ".") break;

        for(int i=0;i<input.size();i++) {
            if(input[i] == '(' || input[i] == '[') s.push(input[i]);
            
            if(!s.empty()) {
                if(input[i] == ')' && s.top() == '(') s.pop();
                if(input[i] == ']' && s.top() == '[') s.pop();
            } else {
                if(input[i] == ')' || input[i] == ']') {
                    result = "no";
                    break;
                }
            }
        }

        if(!s.empty()) result = "no";
        
        std::cout << result << "\n";

        while(!s.empty()) s.pop(); //initialize
    }

    return 0;
}