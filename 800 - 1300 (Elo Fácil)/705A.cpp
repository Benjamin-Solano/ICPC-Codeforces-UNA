#include <iostream>

using namespace std;


void solution() {


    string hate = "I hate";
    string love = "I love";
    int n;
    cin >> n;

    for(int i = 1; i <= n - 1; i++) {
        if(i % 2 == 0) {
            cout << love + " that ";
        } else if (i % 2 != 0) {
            cout << hate + " that "; 
        }
    }

    if (n % 2 == 0) {
        cout << love + " it\n";
    } else {
        cout << hate + " it\n";
    }

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}