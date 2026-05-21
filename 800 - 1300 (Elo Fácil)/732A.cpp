#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int k, r;
    cin >> k >> r;
    
    for (int x = 1; x <= 10; x++) {
        int ultimo = (x * k) % 10;
        if (ultimo == 0 || ultimo == r) {
            cout << x << "\n";
            return 0;
        }
    }
    
    return 0;
}