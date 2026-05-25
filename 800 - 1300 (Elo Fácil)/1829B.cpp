#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n; ++i) {
            cin >> vec[i];
        }

        int x = 0;
        vector<int> cant_ceros;
        for(int i = 0; i < n; i++) {
            if (vec[i] == 0) {
                x++;
            } else {
                if (x > 0) {
                    cant_ceros.push_back(x);
                    x = 0;
                }
            }
        }

        if (x > 0) {
            cant_ceros.push_back(x);
        }

        if (cant_ceros.empty()) {
            cout << "0\n";
        } else {
            cout << *max_element(cant_ceros.begin(), cant_ceros.end()) << "\n";
        }
    }

    return 0;
}