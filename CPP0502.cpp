#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

struct ThiSinh {
    string name, date;
    double d1, d2, d3;
};

void nhap(struct ThiSinh &A) {
    getline(cin, A.name);
    getline(cin, A.date);
    cin >> A.d1 >> A.d2 >> A.d3;
}

void chuanhoa(string &s) {
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
}

void in(struct ThiSinh A) {
    stringstream ss(A.name);
    string s;
    while (ss >> s) {
        chuanhoa(s);
        cout << s << ' ';
    }
    cout << A.date << ' ' << fixed << setprecision(1) << A.d1 + A.d2 + A.d3;
}

int main() {
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}