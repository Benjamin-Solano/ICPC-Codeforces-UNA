#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    int x, y, z,w;
    cin >> x >> y >> z >> w;
    int maximo = max({x,y,z,w});

    if (maximo - x != 0) {
        cout << maximo - x << " ";
    } 
    if (maximo - y != 0) {
        cout << maximo - y << " ";
    }
    if (maximo - z != 0) {
        cout << maximo - z << " ";
    }
    if (maximo - w != 0) {
        cout << maximo - w << " ";
    }

    return 0;
}