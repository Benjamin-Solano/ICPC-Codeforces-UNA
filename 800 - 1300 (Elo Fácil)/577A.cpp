#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    cin >> n >> x;

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (x % i == 0 && x / i <= n) {
            count++;
        }
    }
    cout << count << "\n";
}