#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int caracteresDiferentes(string s) {
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    return s.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin>>t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        int maximo = 0;
        for(int i = 0; i < n - 1; i++) {
            string subA = s.substr(0, i+1);
            string subB = s.substr(i+1);
            maximo = max(caracteresDiferentes(subA) + caracteresDiferentes(subB), maximo);
        }
        cout << maximo << "\n";
    }
}