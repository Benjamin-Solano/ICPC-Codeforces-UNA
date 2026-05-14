#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

string verificar_cant_letras(string a, string b, string c) {
    int contador;
    string aux = a+b;
    vector<pair<char,int>> cant_letrasA(aux.length());
    vector<pair<char,int>> cant_letrasB(c.length());

    if(aux.length() != c.length()) {
        return "NO\n";
    }

    for(int i = 0; i < aux.length(); i++) {
        contador = 0;
        for(int j = 0; j < aux.length(); j++) {
            if(aux[i] == aux[j]) contador++;
        }
        cant_letrasA[i] = {contador, aux[i]};
    }

    for(int i = 0; i < c.length(); i++) {
        contador = 0;
        for(int j = 0; j < c.length(); j++) {
            if(c[i] == c[j]) contador++;
        }
        cant_letrasB[i] = {contador, c[i]};
    }

    sort(cant_letrasA.begin(), cant_letrasA.end());
    sort(cant_letrasB.begin(), cant_letrasB.end());

    for(int i = 0; i < cant_letrasA.size(); i++) {
        if (cant_letrasA[i].second != cant_letrasB[i].second) {
            return "NO\n";
        }
    }

    return "YES\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b,c;
    cin >> a >> b >> c;

    cout << verificar_cant_letras(a,b,c);

    return 0;
}