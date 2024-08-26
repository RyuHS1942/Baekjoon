#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& A, int p, int q, int r, int& count, int K) {
    int i = p;
    int j = q + 1;
    int t = 0;
    vector<int> tmp(r - p + 1);
    
    while (i <= q && j <= r) {
        if (A[i] <= A[j]) {
            tmp[t++] = A[i++];
        } else {
            tmp[t++] = A[j++];
        }
    }
    
    while (i <= q) {
        tmp[t++] = A[i++];
    }
    
    while (j <= r) {
        tmp[t++] = A[j++];
    }
    
    for (int k = 0; k < tmp.size(); ++k) {
        A[p + k] = tmp[k];
        count++;
        if (count == K) {
            cout << A[p + k] << endl;
            exit(0);
        }
    }
}

void merge_sort(vector<int>& A, int p, int r, int& count, int K) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(A, p, q, count, K);
        merge_sort(A, q + 1, r, count, K);
        merge(A, p, q, r, count, K);
    }
}

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    int count = 0;
    merge_sort(A, 0, N - 1, count, K);
    
    // If the function hasn't exited yet, Kth save didn't occur
    cout << -1 << endl;
    
    return 0;
}