#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;

    bool flag = true;
    for(int i = 0; i < n; i++) {
        if (i == 0 || i % 2 == 0) {
           for(int j = 0; j < m; j++) {
                cout << "#";
            }
            cout << "\n";
        } else {
            if (flag) {
                for(int j = 0; j < m - 1; j++) {
                    cout << ".";
                }
                cout << "#\n";
                flag = false;
            } else {
                cout << "#";
                for(int j = 0; j < m - 1; j++) {
                    cout << ".";
                }
                cout << "\n";
                flag = true;
            }
        }
    }
    return 0;
}