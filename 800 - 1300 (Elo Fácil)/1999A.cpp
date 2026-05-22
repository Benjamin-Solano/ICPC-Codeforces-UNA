#include <iostream>

using namespace std;

int sum(int n) {
    int total=0;
    while(n) {
        total += n%10;
        n /= 10;
    }
    return total;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << sum(n) << "\n";
    }

    return 0;
}