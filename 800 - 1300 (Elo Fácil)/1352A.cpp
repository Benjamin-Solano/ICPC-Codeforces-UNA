#include <iostream>
#include <cmath>
using namespace std;

int cant_digitos_no_0(int n) {
    int count = 0;
    while(n) {
        if (n%10 == 0){ 
            n = n/10;
        }else {
            count++;
            n = n/10;
        }
    }
    return count;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, d;
    cin >> t;

    while(t--) {
        cin >> d;
        cout << cant_digitos_no_0(d) << "\n";
        int i = 0;
        while(d) {
            if (d%10 != 0){
                cout << (d%10) * pow(10,i) << " ";
                i++;
                d = d / 10;
            } else {
                d = d /10;
                i++;
            }

        }
        cout << "\n";
    }


    return 0;
}