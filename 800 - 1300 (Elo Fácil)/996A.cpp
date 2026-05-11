#include <iostream>

using namespace std;

int unidades(int b) {
    int unidad = b%10;
    if(unidad >= 5) {
        return unidad - 5 + 1;
    } else {
        return unidad;
    }
}

int decenas(int b) {
    int decenas = (b/10)%10;
    if(decenas % 2 == 0) {
        return decenas / 2;
    } else {
        return decenas / 2 + (decenas%2) / 1;
    }
}

int centenas(int b) {
    return b / 100;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int b;
    cin >> b;

    cout << unidades(b)+decenas(b)+centenas(b) << "\n";

    return 0;
}