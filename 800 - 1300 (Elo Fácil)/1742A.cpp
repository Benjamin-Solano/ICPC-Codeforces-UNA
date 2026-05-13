#include<iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,t;

    cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        a+b == c || a+c == b || b+c == a ? cout << "YES\n" : cout << "NO\n";
    }
    
    return 0;
}