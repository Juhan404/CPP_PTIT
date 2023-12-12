#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int main() {
    fastsync();
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string str;
        getline(cin, str);
        vector<string> v;
        stringstream ss(str);
        string s;
        while (ss >> s) {
            v.push_back(s);
        }
        for (int i = v.size() - 1; i >= 0; i--) {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}