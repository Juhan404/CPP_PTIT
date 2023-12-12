#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

struct sv {
    int ms;
    string msv, ten, lop, mail, dn;
};

vector<sv> v;

void nhap(int n) {
    for (int i = 1; i <= n; i++) {
        sv x;
        x.ms = i;
        getline(cin, x.msv);
        getline(cin, x.ten);
        getline(cin, x.lop);
        getline(cin, x.mail);
        getline(cin, x.dn);
        v.push_back(x);
    }
}

bool cmp(sv x, sv y) {
    return x.ten < y.ten;
}

void in(sv a) {
    cout << a.ms << ' ' << a.msv << ' ' << a.ten << ' ' << a.lop << ' ' << a.mail << ' ' << a.dn << endl;
}

void check(string s) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i].dn == s) {
            in(v[i]);
        }
    }
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    nhap(t);
    int n;
    cin >> n;
    cin.ignore();
    sort(v.begin(), v.end(), cmp);
    while (n--) {
        string name;
        getline(cin, name);
        check(name);
    }
    return 0;
}