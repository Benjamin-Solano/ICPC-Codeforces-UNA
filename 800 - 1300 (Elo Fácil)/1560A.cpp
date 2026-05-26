#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int a;
        cin >> a;
        vector<int> vec;
        for(int i = 1; i < 2000; i++) {
            if(i % 3 != 0 && i%10 != 3) {
                vec.push_back(i);
            }
        }
        cout << vec[a - 1] << "\n";
    }

    return 0;
}