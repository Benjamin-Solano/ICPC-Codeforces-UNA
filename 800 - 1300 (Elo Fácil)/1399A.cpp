#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        bool flag = true;
        for(int i = 0; i < n - 1; i++) {
            if (abs(vec[i] - vec[i+1]) > 1) {
                flag = false;
            }
        }
        flag ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}