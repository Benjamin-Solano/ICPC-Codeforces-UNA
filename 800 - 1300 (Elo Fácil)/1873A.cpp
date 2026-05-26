#include <iostream>
using namespace std;

int main() {    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        s[0] != 'a' && s[1] != 'b' && s[2] != 'c' ? cout << "NO\n" : cout << "YES\n";
    }

    return 0;
}