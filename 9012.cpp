#include<iostream>
#include<stack>

int main() {
    int T;
    std::string input;
    std::stack<char> stack;
    std::string result = "NO";

    std::cin >> T;

    for(int i=0;i<T;i++) {
        std::cin >> input;

        for(int j=0;j<input.size();j++) {
            if(stack.empty()) {
                stack.push(input[j]);
                //std::cout << "empty" << "\n";
            }
            else {
                if(stack.top() != input[j]) {
                    stack.pop();
                    //std::cout << "pop" << "\n";
                }
                else {
                    stack.push(input[j]);
                    //std::cout << "push" << "\n";
                }
            }
        }

        if(stack.empty()) result = "YES";
        std::cout << result << "\n";

        while(!stack.empty()) stack.pop(); //initialize
    }

    return 0;
}