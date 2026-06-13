#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; 

    cin >> t;
    while(t--) {
        long long a, b, c; cin >> a >> b >> c;
        if (a + (c + 1) / 2 > b + c / 2) cout << "First\n";
        else cout << "Second\n";
    }

    return  0;
}