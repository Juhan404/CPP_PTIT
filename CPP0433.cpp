#include <bits/stdc++.h>
#define MAX 100005
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

vector<pair<int, int>> ts;

int find(int n) {
    for (int i = 0; i < ts.size(); i++) {
        if (ts[i].first == n)
            return i;
    }
    return -1;
}

bool cmp(pair<int, int> x, pair<int, int> y) {
    if (x.second != y.second)
        return x.second > y.second;
    else
        return x.first < y.first;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            int pos = find(tmp);
            if (pos == -1)
                ts.push_back({tmp, 1});
            else
                ts[pos].second++;
        }
        sort(ts.begin(), ts.end(), cmp);
        for (int i = 0; i < ts.size(); i++) {
            while (ts[i].second--) {
                cout << ts[i].first << ' ';
            }
        }
        ts.clear();
        cout << endl;
    }
    return 0;
}