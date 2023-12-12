#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

struct ns {
    string name, d, m, y;
};

typedef struct ns ns;

bool cmp(ns x, ns y) {
    if (x.y != y.y) {
        return x.y < y.y;
    }
    else if (x.m != y.m) {
        return x.m < y.m;
    }
    else
        return x.d < y.d;
}

int main() {
    fastsync();
    int n;
    cin >> n;
    cin.ignore();
    ns a[n];
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        for (char &x : s)
            if (x == '/')
                x = ' ';
        stringstream ss(s);
        string tmp;
        int check = 0;
        while (ss >> tmp) {
            if (!check) {
                a[i].name = tmp;
                ++check;
            }
            else if (check == 1) {
                a[i].d = tmp;
                ++check;
            }
            else if (check == 2) {
                a[i].m = tmp;
                ++check;
            }
            else {
                a[i].y = tmp;
                ++check;
            }
        }
    }
    sort(a, a + n, cmp);
    cout << a[n - 1].name << endl
         << a[0].name;
    return 0;
}