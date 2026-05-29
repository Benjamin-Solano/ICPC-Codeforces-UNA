#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k, a;
    cin >> n >> k;

    vector<int> vec;
    for(int i = 0; i < n; i++){
        cin >> a;
        if (a <= 5-k) vec.push_back(a);
    }

    cout << vec.size() / 3 << "\n";



    return 0;
}