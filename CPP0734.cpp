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
    int m, n;
    cin >> m >> n;
    int M[500][500];
    for (int i = 0; i < m; i++)for (int j = 0; j < n; j++) cin >> M[i][j];
    for (int i = 1; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (M[i][j] == 1)M[i][j] += M[i - 1][j];
        }
    }
    int maxx = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int min = M[i][j];
            for (int l = j; l >= 0; l--) {
                if (M[i][l] != 0) {
                    if (min > M[i][l]) min = M[i][l];
                    maxx = max(maxx, min * (j - l + 1));
                }
                else break;
            }
        }
    }
    cout << maxx << endl;
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