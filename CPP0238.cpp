#include <bits/stdc++.h>
using namespace std;

void __print (int x) {cerr << x;}
void __print (long long x) {cerr << x;}
void __print (double x) {cerr << x;}
void __print (char x) {cerr << '\'' << x << '\'';}
void __print (const string &x) {cerr << '\"' << x << '\"';}
void __print (bool x) {cerr << (x ? "true" : "false");}
template <typename T, typename V> void __print (const pair <T, V> &x)
{cerr << '{'; __print (x.first); cerr << ','; __print (x.second); cerr << '}';}
template <typename T> void __print (const T &x)
{int f = 0; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i);}
void _print() {cerr << "]\n";}
template <typename T, typename... V> void _print(T t, V... v)
{__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "Line " << __LINE__ << ": " << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

#define sz(x) (int) (x).size()
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (auto i = (a); i <= (b); ++i)
#define REP(i, a, b) for (auto i = (a); i >= (b); --i)
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
#define fastsync() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define LL_MIN LONG_LONG_MIN
#define LL_MAX LONG_LONG_MAX
#define endl '\n'
#define pb push_back
#define fi first
#define se second
#define pob pop_back

using ll = long long;
using pii = pair <int, int>;
using vi = vector <int>;
using vll = vector <ll>;

const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

int n, m;
char a[25][25];
int dx[4] = { -1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void loang(int i, int j) {
    a[i][j] = 'E';

    FOR(k, 0, 3) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];

        if (a[i1][j1] == 'O' && i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m) {
            loang(i1, j1);
        }
    }
}

void run_case() {
    cin >> n >> m;
    FOR(i, 1, n) FOR(j, 1, m) cin >> a[i][j];

    FOR(i, 1, n) FOR(j, 1, m) if (i == 1 || j == 1 || i == n || j == m) if (a[i][j] == 'O') loang(i, j);

    FOR(i, 1, n) {
        FOR(j, 1, m) {
            if (a[i][j] == 'E') cout << 'O';
            else if (a[i][j] == 'O') cout << 'X';
            else cout << 'X';

            cout << ' ';
        }
        cout << endl;
    }
}

int main() {
    fastsync();

    int test = 1;
    cin >> test;
    while (test -- > 0) {
        run_case();
    }

    cerr << "Time elapsed: " << fixed << setprecision(3) << TIME << "s.";
    return 0;
}