#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    long long a, b;
    while(t--){ 
        cin >> a >> b;
        long double distancia = abs(a - b);
        cout << (long long)ceil(distancia/10) << "\n";
    }
    return 0;
}