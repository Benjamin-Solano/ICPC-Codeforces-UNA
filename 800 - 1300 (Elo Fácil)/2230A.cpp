#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        long long grupos_completos = n / 3;
        long long residuo = n % 3;

        long long costo = grupos_completos * min(b, 3 * a)
                        + (residuo == 0 ? 0LL : min(b, residuo * a));

        cout << costo << "\n";
    }
    return 0;
}