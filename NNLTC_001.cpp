#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

const int MAXLIST = 10000;
typedef struct {
    int n;
    int nodes[MAXLIST];
} List;

List ds;

int main() {
    int temp;
    vector<int> v;
    set<int> se;
    while (cin >> temp) {
        v.push_back(temp);
        ++ds.n;
        if (se.find(temp) == se.end()) {
            se.insert(temp);
            ds.nodes[temp] = 1;
        }
        else {
            ++ds.nodes[temp];
        }
    }
    for (int i = 0; i < v.size(); i++) {
        if (ds.nodes[v[i]]) {
            cout << v[i] << ' ' << ds.nodes[v[i]] << endl;
            ds.nodes[v[i]] = 0;
        }
    }
    return 0;
}