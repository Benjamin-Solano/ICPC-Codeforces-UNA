#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s;

    cin >> t;
    while(t--) {
        cin >> s;
        if(s.length() < 3) {
            cout << "NO\n";
        } else {
            transform(s.begin(), s.end(), s.begin(), 
                [](unsigned char c){ return tolower(c); });
            s == "yes" ? cout << "YES\n" : cout << "NO\n";
        }
    }

    return 0;
}