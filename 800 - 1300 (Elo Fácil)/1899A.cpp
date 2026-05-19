#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        (n % 3 == 0) ? cout << "Second\n" : cout << "First\n"; 
    }
    return 0; 
}