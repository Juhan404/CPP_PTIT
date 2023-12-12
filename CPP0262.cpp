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

void run_case() {
    ll n, m;
    cin >> n >> m;
    ll sum = n * (n + 1) / 2;
    ll a = (sum + m) / 2;
    if (__gcd(a, sum - a) == 1 && a - (sum - a) == m) cout << "Yes\n";
    else cout << "No\n";
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