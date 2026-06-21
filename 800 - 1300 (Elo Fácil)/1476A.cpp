#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long m = (n + k - 1) / k;
        long long S = m * k;
        cout << (S + n - 1) / n << "\n";
    }
}