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

int n, m;
pair<int, int> st, en;
int a[1005][1005];
int dx[4] = { -1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int sl[1005][1005];

int loang() {
    queue<pair<int, int>> q;
    q.push(st);
    sl[st.first][st.second] = 0;
    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        int i = cur.first, j = cur.second;
        for (int k = 0; k < 4; k++) {
            int i1 = i + dx[k], j1 = j + dy[k];
            if (a[i1][j1] && i1 >= 0 && i1 < n && j1 >= 0 && j1 < m) {
                a[i1][j1] = 0;
                if (i1 == en.first && j1 == en.second) return sl[i][j] + 1;
                q.push({i1, j1});
                sl[i1][j1] = sl[i][j] + 1;
            }
        }
    }
    return -1;
}

void run_case() {
    cin >> n >> m >> st.first >> st.second >> en.first >> en.second;
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> a[i][j];
    if (a[st.first][st.second] && a[en.first][en.second])
        cout << loang() << endl;
    else cout << -1 << endl;
    for (int i = 0; i < 1005; i++) {
        for (int j = 0; j < 1005; j++) {
            a[i][j] = 0;
            sl[i][j] = 0;
        }
    }
}

int main() {
    fastsync();
    int test;
    cin >> test;
    while (test -- > 0) {
        run_case();
    }
    return 0;
}