#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

struct Point {
    double x, y;
};

void input(struct Point &a) {
    cin >> a.x >> a.y;
}

double distance(struct Point A, struct Point B) {
    return sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
}

int main() {
    struct Point A, B;
    int t;
    cin >> t;
    while (t--) {
        input(A);
        input(B);
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }
    return 0;
}