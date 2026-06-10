#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> vec(5);
    string s;
    int total = 0;

    for(int i = 1; i < 5; i++) cin >> vec[i];
    cin >> s;
    for(int i = 0; i < s.size(); i++) total = total + vec[s[i] - '0'];

    cout << total << "\n";
    return 0;
}