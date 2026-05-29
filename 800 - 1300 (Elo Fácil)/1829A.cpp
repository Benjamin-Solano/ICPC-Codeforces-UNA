#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int diff = 0;
        string s, word = "codeforces"; cin >> s;
        for(int i = 0; i < 10; i++) {
            if (s[i] != word[i]) diff++;
        }
        cout << diff << "\n";
    }

    return 0;
}