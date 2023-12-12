#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

void chuanhoa(string &s) {
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
}

bool tn(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i])
            return 0;
    }
    return 1;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    cin.ignore();
    multiset<string> ms;
    while (t--) {
        string str;
        getline(cin, str);
        chuanhoa(str);
        int a[1005], i = 0;
        for (char x : str) {
            if (x == 'a' || x == 'b' || x == 'c')
                a[i++] = 2;
            else if (x == 'd' || x == 'e' || x == 'f')
                a[i++] = 3;
            else if (x == 'g' || x == 'h' || x == 'i')
                a[i++] = 4;
            else if (x == 'j' || x == 'k' || x == 'l')
                a[i++] = 5;
            else if (x == 'm' || x == 'n' || x == 'o')
                a[i++] = 6;
            else if (x == 'p' || x == 'q' || x == 'r' || x == 's')
                a[i++] = 7;
            else if (x == 't' || x == 'u' || x == 'v')
                a[i++] = 8;
            else
                a[i++] = 9;
        }
        if (tn(a, i))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}