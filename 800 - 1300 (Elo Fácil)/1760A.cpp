#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);


    int a, b, c, t;
    cin >> t;
    while(t--)  {
        cin >> a >> b >> c;
        int menor = min({a,b,c});
        int mayor = max({a,b,c});
        cout << (a+b+c) - menor - mayor << "\n";
    }

    return 0;
}