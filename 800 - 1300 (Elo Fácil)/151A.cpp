#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int mililiter = k * l;
    int toasts = mililiter/nl;
    int limes = c * d;
    int salt = p / np;

    cout << min({toasts, limes, salt}) / n << "\n";
    
    return 0;
}