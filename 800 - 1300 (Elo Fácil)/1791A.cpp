#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    char l;
    string cf = "codeforces";

    while(t--) {
        cin >> l;
        size_t pos = cf.find(l);
        pos != string::npos ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}