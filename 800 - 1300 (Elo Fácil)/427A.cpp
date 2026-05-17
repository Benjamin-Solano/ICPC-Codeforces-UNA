#include <iostream>
#include <vector>

using namespace std;

int contarCrimenes(vector<int> & vec) {
    int crime = 0;
    int policia = 0;
    for(int i = 0; i < vec.size(); i++) {
        if (vec[i] > 0) policia += vec[i];
        else if (vec[i] == -1 && policia > 0) {
            policia--;
        } else {
            crime++;
        }
    }   
    return crime; 
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> events(n);
    for(int i=0; i < n; i++) {
        cin>>events[i];
    }

    cout << contarCrimenes(events) << "\n";
    return 0;
}