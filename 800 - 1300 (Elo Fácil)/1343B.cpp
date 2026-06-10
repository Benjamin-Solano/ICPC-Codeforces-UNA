#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);


    int t; cin >> t;
    while(t--) {


        int n; cin >> n;
        int m = n/2;

        vector<int> pares(m, 2);
        vector<int> impares(m, 1);
        
        for(int i = 1; i < m; i++) pares[i] = pares[i - 1] + 2;
        for(int i = 1; i < m; i++) impares[i] = impares[i - 1] + 2;

        int sumaPares = accumulate(pares.begin(), pares.end(), 0);
        int sumaImpares = accumulate(impares.begin(), impares.end(), 0);

        bool flag = false;

        while(sumaPares > sumaImpares) {
            impares[impares.size() - 1] += 2;
            sumaImpares += 2;
        }

        if (sumaPares == sumaImpares) {
            cout << "YES\n";
            for(auto i : pares) cout << i << " ";
            for(auto i : impares) cout << i << " ";
            cout << "\n";
        } else {
            cout << "NO\n";
        }

    }
    return 0;
}