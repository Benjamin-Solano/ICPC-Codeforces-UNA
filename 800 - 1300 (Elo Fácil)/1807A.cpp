#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c, t; cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        a + b == c ? cout << "+\n" : cout << "-\n";
    }
    
    return 0;
}