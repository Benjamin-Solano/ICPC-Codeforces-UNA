#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a=0, b=0, t=0;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        a % b == 0 ? cout << 0 << "\n" : cout << b - a % b << "\n";
    }

    return 0;
}