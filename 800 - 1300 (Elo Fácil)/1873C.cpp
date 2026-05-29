#include <iostream>

using namespace std;

int main() {


    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {

        char dardo = 0;
        int puntos = 0, n = 10;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                cin >> dardo;
                if (dardo == 'X') {
                    //columnas
                    if ((i == 0 || i == 9)&& (j >= 0 || j <= 9)) {
                        puntos++;
                    } else if ((0 <= i || i <= 9) && (j == 0 || j == 9)) {
                        puntos++;
                    } else if ((i == 1 || i == 8) && (j >= 1 || j <= 8)) {
                        puntos += 2;
                    } else if ((1 <= i || i <= 8) && (j == 1 || j == 8)) {
                        puntos+= 2;
                    } else if ((i == 2 || i == 7) && (j >= 2 || j <= 7)) {
                        puntos+= 3;
                    } else if ((2 <= i || i <= 7) && (j == 2 || j == 7)) {
                        puntos+=3;
                    } else if ((i == 3|| i == 6) && (j >= 3 || j <= 6)) {
                        puntos+=4;
                    } else if ((3 <= i || i <= 6) && (j == 3 || j == 6)) {
                        puntos+=4;
                    } else if ((i == 4 || i == 5) && (j == 4 || j == 5)) {
                        puntos+=5;
                    }
                } 
            }
            cout << "\n";
        }
        cout << puntos << "\n";
    }

    return 0;
} 