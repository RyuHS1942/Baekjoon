#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main() {
    std::string S;
    std::vector<std::string> v;
    std::string result;

    std::cin >> S;

    for(int i=0;i<S.length();i++) {
        result = S[i];
        
        v.push_back(result);
        for(int j=i+1;j<S.length();j++) {
            result += S[j];
            
            v.push_back(result);
        }
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    std::cout << v.size();
    return 0;
}