#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, c; cin >> a >> b >> c;
        if (a + b - 10 >= 0) {
            cout << "YES\n";
        } else if (a + c - 10 >= 0) {
            cout << "YES\n";
        } else if (b + c - 10 >= 0) {
            cout << "YES\n";
        }  else {
            cout << "NO\n";
        }
    }
    return 0;
}