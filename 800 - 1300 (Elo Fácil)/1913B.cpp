#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;
        
        int count0 = 0, count1 = 0;
        for(char c : s) {
            if(c == '0') count0++;
            else count1++;
        }
        
        if(count0 == count1) {
            cout << 0 << "\n";
            continue;
        }
        
        int costo = abs(count0 - count1);
        
        int quedan = min(count0, count1);
        int mitad = quedan;
        
        int coincidencias = 0;
        for(int i = 0; i < 2 * quedan && i < s.length(); i++) {
            if(i < mitad && s[i] == '0') coincidencias++;
            else if(i >= mitad && s[i] == '1') coincidencias++;
        }
        
        cout << costo + coincidencias << "\n";
    }
    
    return 0;
}