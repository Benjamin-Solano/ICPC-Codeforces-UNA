#include <iostream>
#include <vector>
using namespace std;


int cantidad_coincidencias(vector<int> & a, vector<int> & b) {
    int cant = 0;
    for(int i=0; i < a.size(); i++) {
        for(int j = 0; j < b.size(); j++){
            if (a[i] == b[j]) cant++;
        }
    }
    return cant;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;

    vector<int> casa(t);
    vector<int> visita(t);
    for(int i = 0; i < t; i++) {
        cin >> casa[i];
        cin >> visita[i];
    }

    cout << cantidad_coincidencias(casa, visita) << "\n";

    return 0;
}