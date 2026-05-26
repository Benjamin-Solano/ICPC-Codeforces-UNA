#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int maximo = *max_element(vec.begin(), vec.end());

    int faltante = 0;
    for(int i = 0; i < n; i++) {
        if (vec[i] < maximo) {
            faltante += maximo - vec[i];
        }
    }

    cout << faltante << "\n";

    return 0;
}