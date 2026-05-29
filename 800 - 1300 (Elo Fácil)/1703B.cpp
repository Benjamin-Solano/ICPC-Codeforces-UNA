#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        vector<char> vec;
        for(int i = 0; i < n; i++) vec.push_back(s[i]);
        
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        cout << n + vec.size() << "\n";
    }

    return 0;
}