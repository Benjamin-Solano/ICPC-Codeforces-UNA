#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        long long x, y, a ,b; cin >> x >> y >> a >> b;
        cout << min((min(x, y) * b) + ((max(x, y) - min(x, y)) * a), (x+y) * a) << "\n";
    }
}