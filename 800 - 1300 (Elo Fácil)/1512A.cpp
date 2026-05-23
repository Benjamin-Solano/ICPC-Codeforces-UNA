#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int frecuencia(vector<int> vec, int n) {
    int a = vec[0]; int b;
    for(int i = 0; i < n; i++) {
        if (a != vec[i]) b=vec[i];
    }

    pair<int,int> u1 = {a,0};
    pair<int,int> u2 = {b,0};

    for(int i = 0; i < n; i++) {
        if (a == vec[i]) u1.second++;
        if (b == vec[i]) u2.second++;
    }

    if (u1.second == 1) {
        return u1.first;
    } else{ 
        return u2.first;
    }
}


int espia(vector<int> vec, int n) {
    int espia = frecuencia(vec, n);
    for(int i = 0; i < n; i++) {
        if (vec[i] == espia) return i + 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n; i++) cin >> vec[i];
        cout << espia(vec, n) << "\n";
    }

    return 0;
}