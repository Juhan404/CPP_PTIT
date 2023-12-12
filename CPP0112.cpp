#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double x1, x2, y1, y2;
        double res;
        cin >> x1 >> y1 >> x2 >> y2;
        res = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        cout << fixed << setprecision(4) << res << endl;
    }
    return 0;
}