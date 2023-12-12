#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

bool cmp(string x, string y) {
    string xy = x + y, yx = y + x;
    return xy > yx;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        string str;
        getline(cin, str);
        stringstream ss(str);
        string s;
        vector<string> v;
        while (ss >> s) {
            for (int i = 0; i < s.size(); i++) {
                while (s[i] == '0') {
                    s.erase(i, 1);
                }
                break;
            }
            if (s.size() == 0) {
                v.push_back("0");
            }
            else
                v.push_back(s);
        }
        sort(v.begin(), v.end(), cmp);
        for (string s : v) {
            cout << s;
        }
        cout << endl;
    }
    return 0;
}