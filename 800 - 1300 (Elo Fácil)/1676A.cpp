#include <iostream>
#include <string>

using namespace std;

int sum(int n) {
    int total = 0;
    while(n) {
        total += n % 10;
        n /= 10;
    }
    return total;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    string s;

    cin >> t;
    while(t--) {
        cin >> s;
        int izq = stoi(s.substr(0, 3));
        int der = stoi(s.substr(3, 3));

        izq = sum(izq);
        der = sum(der);

        (izq == der) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}