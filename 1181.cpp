#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    int N;
    int length = 0;
    std::string word;
    std::vector<std::pair<int, std::string>> v;
    std::pair<int, std::string> p;

    std::cin >> N;

    for(int i=0;i<N;i++) {
        
        std::cin >> word;
        length = word.length();
        p = make_pair(length, word);

        v.push_back(p);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i=0;i<v.size();i++) {
        std::cout << v[i].second << "\n";
    }

    return 0;
}