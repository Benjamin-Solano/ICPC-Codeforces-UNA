#include <iostream>

using namespace std;

int cantidad_ejercicios(int n, int total_min) {
    int p = 0;
    for(int i = 1; i <= n; i++)  {
        if(5*i <= total_min) {
            total_min -= 5*i;
            p++;
        }
    }
    return p;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k, p = 0, total_min = 240; cin >> n >> k;
    total_min -= k;

    cout << cantidad_ejercicios(n, total_min) << "\n";


    return 0;
}