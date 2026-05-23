#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        vector<int> vec(3);
        for(int i = 0; i < 3; i++) {
            cin >> vec[i];
        }

        pair<int,int> u1 = {vec[0], 0};
        pair<int,int> u2;

        int b;
        for(int i = 0; i < 3; i++) {
            if(u1.first != vec[i]) b = vec[i];
        }

        u2 = {b, 0};
        for(int i = 0; i < 3; i++) {
            if(u1.first == vec[i]) u1.second++;
            if(u2.first == vec[i]) u2.second++;
        }

        (u1.second == 1) ? cout << u1.first << "\n" : cout << u2.first << "\n";
    }

    return 0;
}