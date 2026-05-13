#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, t, c;
    cin >> t;

    while(t--) {
        cin >> c;
        a = (c/2) + 1;
        b = c - a;

        if(a > b && b > 0 && a > 0 && a + b == c) {
            cout << b << "\n";
        } else {
            cout << 0 << "\n";
        }
    }


    return 0;
}