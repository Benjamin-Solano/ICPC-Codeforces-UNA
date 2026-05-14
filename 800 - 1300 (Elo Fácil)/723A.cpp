#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int a,b,c;
    cin >> a >> b >> c;

    set<int> distancias = {a , b,  c};
    int minimo = *min_element(distancias.begin(), distancias.end());
    int maximo = *max_element(distancias.begin(), distancias.end());

    cout << maximo - minimo << "\n";
    
    return 0;
}