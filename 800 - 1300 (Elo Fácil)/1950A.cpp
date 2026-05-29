#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c, t;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        if (a < b && b > c) {
            cout << "PEAK\n";
        } else if (a < b && b < c) {
            cout << "STAIR\n";
        } else {
            cout << "NONE\n";
        }   
    }

    return 0;
}