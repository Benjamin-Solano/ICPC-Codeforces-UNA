#include <iostream>
#include <utility>
#include <cmath>
using namespace std;

bool esPrimo(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return true;
    }
    return false;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    if (n % 2 == 0) {
        int a = n /2, b = n / 2;
        while (esPrimo(a) == false || esPrimo(b) == false) {
            a++;
            b--;
        }
        cout << a << " " << b << "\n";
    } else {
        int a = n/2, b = (n/2) + 1; 
        while (esPrimo(a) == false || esPrimo(b) == false) {
            a++;
            b--;
        }
        cout << a << " " << b << "\n";
    }

    return 0;
}