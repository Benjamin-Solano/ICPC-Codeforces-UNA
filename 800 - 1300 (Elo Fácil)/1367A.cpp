#include <iostream> 
#include <vector>
using namespace std;

int main() {


    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        vector<string> pares;
        for(int i = 0; i < s.length(); i+=2) {
            pares.push_back(s.substr(i, 2));
        }

        cout << pares[0];
        for(int i = 1; i < pares.size(); i++) {
            cout << pares[i].substr(1,1);
        }
        cout << "\n";
    }

    return 0;
}