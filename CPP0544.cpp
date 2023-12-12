#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define PI 3.141592653589793238

// #include <debug.h>
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

void run_case() {
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    double x = sqrt((a - c) * (a - c) + (b - d) * (b - d));
    double y = sqrt((e - c) * (e - c) + (f - d) * (f - d));
    double z = sqrt((e - a) * (e - a) + (f - b) * (f - b));
    if (x + y <= z || x + z <= y || z + y <= x)
        cout << "INVALID\n";
    else {
        double s = sqrt((x + y + z) * (x + y - z) * (y + z - x) * (z + x - y)) * 1.0 / 4;
        double r = x * y * z * 1.0 / (4 * s);
        cout << fixed << setprecision(3) << (double)PI * r * r << endl;
    }
}

int main() {
    // fastsync();
    int Test;
    cin >> Test;
    for (int test = 1; test <= Test; ++test) {
        run_case();
    }
    return 0;
}