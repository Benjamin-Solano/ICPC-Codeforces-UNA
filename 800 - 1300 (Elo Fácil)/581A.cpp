#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, diff, same;
    cin >> a >> b;

    diff = min(a,b);
    same = (max(a,b) - diff) / 2;

    cout << diff << " " << same << "\n";  

    return 0;
}