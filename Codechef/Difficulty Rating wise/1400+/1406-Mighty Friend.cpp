#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string can_tomu_win(int N, int K, vector<int> &A) {
    int motu_score = 0, tomu_score = 0;
    
    for (int i = 0; i < N; i += 2) {
        motu_score += A[i];
    }
    for (int i = 1; i < N; i += 2) {
        tomu_score += A[i];
    }
    
    if (tomu_score > motu_score) {
        return "YES";
    }
    
    vector<int> even_indices, odd_indices;
    for (int i = 0; i < N; i += 2) {
        even_indices.push_back(A[i]);
    }
    for (int i = 1; i < N; i += 2) {
        odd_indices.push_back(A[i]);
    }
    
    sort(even_indices.rbegin(), even_indices.rend());
    sort(odd_indices.begin(), odd_indices.end());
    
    int swap_count = min(K, min((int)even_indices.size(), (int)odd_indices.size()));
    for (int i = 0; i < swap_count; ++i) {
        if (even_indices[i] > odd_indices[i]) {
            motu_score -= even_indices[i];
            tomu_score -= odd_indices[i];
            motu_score += odd_indices[i];
            tomu_score += even_indices[i];
            
            if (tomu_score > motu_score) {
                return "YES";
            }
        } else {
            break;
        }
    }
    
    return "NO";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        string result = can_tomu_win(N, K, A);
        cout << result << endl;
    }
    return 0;
}
