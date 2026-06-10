#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        string timur = "Timur";
        
        sort(timur.begin(), timur.end());
        sort(s.begin(), s.end());

        s == timur ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}