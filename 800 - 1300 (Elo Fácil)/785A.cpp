#include<iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int n, sum=0;

    cin >> n;
    while(n--) {
        cin >> s;
        if (s[0] == 'T') sum += 4;
        if (s[0] == 'C') sum += 6;
        if (s[0] == 'O') sum += 8;
        if (s[0] == 'D') sum += 12;
        if (s[0] == 'I') sum += 20;
    }

    cout << sum <<"\n";

    return 0;
}