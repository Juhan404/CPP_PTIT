#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int cnt[125];

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string s;
        getline(cin, s);
        int n;
        cin >> n;
        for (int i = 0; i < s.length(); i++) {
            ++cnt[s[i]];
        }
        int thieu = 0, thua = 0;
        for (int i = 97; i < 123; i++) {
            if (!cnt[i])
                ++thieu;
            else if (cnt[i] > 1) {
                thua += cnt[i] - 1;
            }
        }
        if (n < thieu)
            cout << 0 << endl;
        else if (thua < thieu)
            cout << 0 << endl;
        else
            cout << 1 << endl;
        for (int i = 0; i < 125; i++)
            cnt[i] = 0;
    }
    return 0;
}