#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    int cM = 0, cC = 0;
    while(t--) {
        int c, m;
        cin >> m >> c;
        
        if (m > c) {
            cM++;
        } else if (c > m) {
            cC++;
        }
    }

    if (cM > cC) {
        cout << "Mishka\n";
    } else if (cC > cM) {
        cout << "Chris\n";
    } else{ 
        cout << "Friendship is magic!^^\n";
    }

    return 0;
}