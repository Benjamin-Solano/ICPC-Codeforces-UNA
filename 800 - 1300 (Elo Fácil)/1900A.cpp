#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; string s;
        cin >> n >> s;

        int total = 0;
        int run   = 0;
        int best  = 0;

        for (char c : s) {
            if (c == '.') {
                total++;
                run++;
                best = max(best, run);
            } else {
                run = 0;
            }
        }

        cout << (best >= 3 ? 2 : total) << "\n";
    }
    return 0;
}