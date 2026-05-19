#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, amazing = 0; cin >> n;
    vector<int> contests(n, -1);

    for(int i = 0; i < n; i++) {
        cin >> contests[i];
        if (i != 0) {
            bool menor = true;
            bool mayor = true;
            for(int j = 0; j < n && contests[j] > -1 && j != i; j++) {
                if(contests[i] >= contests[j]) menor = false;
                if(contests[i] <= contests[j]) mayor = false;
            }
            if (menor) amazing++;
            if (mayor) amazing++;
        }
    }
    cout << amazing << "\n";
    return 0;
}