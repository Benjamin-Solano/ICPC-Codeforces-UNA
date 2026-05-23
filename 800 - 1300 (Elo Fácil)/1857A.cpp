#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n; 
        vector<int> impar;
        vector<int> par;
        for(int i = 0; i < n; i++) {
            cin >> x;
            x % 2 == 0 ? par.push_back(x) : impar.push_back(x);
        }

        int totalI = accumulate(impar.begin(), impar.end(), 0); 
        int totalP = accumulate(par.begin(), par.end(), 0);
        int total = totalI + totalP;

        (totalI % 2 == 0 && totalP % 2 == 0) || total % 2 == 0 ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}