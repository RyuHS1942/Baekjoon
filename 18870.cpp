#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

    int N;
    int x;
    std::vector<int> v;
    std::vector<int> result;

    std::cin >> N;

    for(int i=0;i<N;i++) {
        std::cin >> x;

        v.push_back(x);
        result.push_back(x);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i=0;i<result.size();i++) {
        std::cout << lower_bound(v.begin(), v.end(), result[i]) - v.begin() << " ";
    }

    return 0;
}