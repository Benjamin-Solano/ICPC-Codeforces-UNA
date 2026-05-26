#include <iostream>

using namespace std;

int solve(string s, int n) {

    int tam = n;
    for(int i = 0; i < n/2; i++) {
        if (s[i] != s[n - 1 - i]) {
            tam -= 2;
        } else if (s[i] == s[n - 1 - i]){
            return tam;
        }
    }
    return tam;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int t; cin >> t;
    while(t--) {
        int n ; cin >> n;
        string s; cin >> s;
        cout << solve(s, n) << "\n";
    }

    return 0;
}   