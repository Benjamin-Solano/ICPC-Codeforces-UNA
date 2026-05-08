#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

void solucion() {

    string s, aux = "";
    getline(cin, s);

    for(int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            aux += s[i];
        }
    }

    sort(aux.begin(), aux.end());
    aux.erase(unique(aux.begin(), aux.end()), aux.end());

    cout << aux.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solucion();
    
    return  0;
}