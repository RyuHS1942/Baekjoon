#include<iostream>
#include<vector>
#include<algorithm>

bool compare(std::pair<std::pair<int, std::string>, int> a, std::pair<std::pair<int, std::string>, int> b) {
    if(a.first.first == b.first.first)
        return a.second < b.second;
    return a.first.first < b.first.first;
}

int main() {
    int N;
    int age;
    std::string name;
    std::pair<int, std::string> p;
    std::pair<std::pair<int, std::string>, int> item; //p & order
    std::vector<std::pair<std::pair<int, std::string>, int>> v;


    std::cin >> N;

    for(int i=0;i<N;i++) {
        std::cin >> age >> name;
        p = make_pair(age, name);
        item = make_pair(p, i);

        v.push_back(item);
    }

    sort(v.begin(), v.end(), compare);

    for(int i=0;i<v.size();i++) {
        std::cout << v[i].first.first << " " << v[i].first.second << "\n";
    }

    return 0;
}