#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long

void __print(int x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i);}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

const int MOD = 1e9 + 7;
const int MAX = 1e7 + 7;

struct toado {
    int x, y;
};

double S(int a, int b, int c, int d, int e, int f) {
    double x = sqrt((a - c) * (a - c) + (b - d) * (b - d));
    double y = sqrt((e - c) * (e - c) + (f - d) * (f - d));
    double z = sqrt((e - a) * (e - a) + (f - b) * (f - b));
    double s = sqrt((x + y + z) * (x + y - z) * (y + z - x) * (z + x - y)) * 1.0 / 4;
    return s;
}

void run_case() {
    int n; cin >> n;
    struct toado M[1000];
    for (int i = 0; i < n; i++)cin >> M[i].x >> M[i].y;
    double s = 0;
    for (int i = 1; i < n - 1; i++) {
        s += S(M[0].x, M[0].y, M[i].x, M[i].y, M[i + 1].x, M[i + 1].y);
    }
    cout << fixed << setprecision(3) << s << endl;
}

int main() {
    fastsync();
    int test = 1;
    cin >> test;
    while (test -- > 0) {
        run_case();
    }
    return 0;
}