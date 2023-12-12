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

struct TD {
    int x, y, z;
};

void run_case() {
    TD A, B, C, D;
    cin >> A.x >> A.y >> A.z >> B.x >> B.y >> B.z >> C.x >> C.y >> C.z >> D.x >> D.y >> D.z;
    TD ab; ab.x = B.x - A.x, ab.y = B.y - A.y, ab.z = B.z - A.z;
    TD ac; ac.x = C.x - A.x, ac.y = C.y - A.y, ac.z = C.z - A.z;
    TD CP; CP.x = ab.y * ac.z - ab.z * ac.y; CP.y = ab.z * ac.x - ab.x * ac.z; CP.z = ab.x * ac.y - ab.y * ac.x;
    if (CP.x * (D.x - A.x) + CP.y * (D.y - A.y) + CP.z * (D.z - A.z) == 0)
        cout << "YES\n";
    else cout << "NO\n";
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