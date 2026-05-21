#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int buscarMayor(vector<int> & cards) {
    int max = cards[0] > cards[cards.size() - 1] ? cards[0] : cards[cards.size()- 1];
    auto it = find(cards.begin(), cards.end(), max);
    cards.erase(it);
    return max;
}

void solucion(vector<int> & cards) {
    bool sod = true;
    int sereja = 0, dima = 0;
    int tam  = cards.size();
    while(tam--) {
        if(sod) {
            sereja += buscarMayor(cards);
            sod = false;
        } else {
            dima += buscarMayor(cards);
            sod = true;
        }
    }
    cout << sereja << " " << dima << "\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> cards(n);


    for(int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    solucion(cards);

    return 0;
}