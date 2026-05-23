#include <iostream> 
#include <vector>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        bool flag = false;
        int n,k; cin >> n >> k;
        vector<int> vec(n);
        for(int i = 0; i < n; i++) {
            cin >> vec[i];
            if(vec[i] == k) {
                flag = true;
            }
        }
        flag ? cout <<"YES\n" : cout <<"NO\n";
    }

    return 0;
}