#include <iostream>
#include <set>
#include <string>
#include <cctype>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string s;
    cin >> n >> s;
    
    set<char> unique_letters;
    
    for (char c : s) {
        unique_letters.insert(tolower(c));
    }
    
    if (unique_letters.size() == 26) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}