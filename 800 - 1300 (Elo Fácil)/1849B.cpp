#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

void solution() {
    long long n, k; cin >> n >> k;
    vector<pair<long, long>> vec(n);
    
    long long a;
    for(int i = 0; i < n; i++) {
        cin >> a;
        vec[i] = {a, 0};
    }

    long long orden = 1;
    while(orden <= n) {
        auto it = find(vec.begin(), vec.end(), *max_element(vec.begin(), vec.end()));
        int index = distance(vec.begin(), it);
        if (vec[index].first > 0) {
            vec[index].first -= k;
            if (vec[index].first <= 0) {
                cout << index + 1 << " ";
                orden++;
            }
        }
    }

    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}