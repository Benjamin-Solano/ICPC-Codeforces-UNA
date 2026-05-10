#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p, x, y;
    vector<int> lvl;
    cin >> n;
    
    cin >> x;
    for(int i = 1; i <= x; i++) {
        cin >> p;
        lvl.push_back(p);
    }
    
    cin >> y;
    for(int i = 1; i <= y; i++) {
        cin >> p;
        lvl.push_back(p);
    }

    sort(lvl.begin(), lvl.end());
    lvl.erase(unique(lvl.begin(), lvl.end()), lvl.end());

    int sum = accumulate(lvl.begin(), lvl.end(),0);
    
    sum == (n * (n + 1) / 2) ? cout << "I become the guy.\n" : cout << "Oh my keyboard!\n";

    return 0;
}