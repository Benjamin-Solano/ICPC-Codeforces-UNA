#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        cout << max(a,b) - min(a,b) << "\n";
    }

    return 0;
}