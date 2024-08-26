#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    int N;
    std::string A;
    std::string B;
    std::vector<std::string> v;

    std::cin >> N;

    for(int i=0;i<N;i++) {
        std::cin >> A >> B;

        if(A == "ChongChong" || B == "ChongChong") {
            v.push_back(A);
            v.push_back(B);
        } else {
            if(v.end() == find(v.begin(), v.end(), A) && v.end() == find(v.begin(), v.end(), B)) {

            } else {
                v.push_back(A);
                v.push_back(B);
            }
        }

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(),v.end()), v.end());
    }

    std::cout << v.size();
}