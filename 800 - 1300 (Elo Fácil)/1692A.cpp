#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);


    int t;
    cin >> t;

    while(t--) {

        vector<int> vec(4);
        for(int i = 0; i < 4; i++) {
            cin >> vec[i];
        }
        
        int timur = vec[0];
        int adelante = 0;
        for(int i = 1; i < 4; i++){
            if(timur < vec[i]) adelante++; 
        }

        cout << adelante << "\n";
    }


    return 0;
}