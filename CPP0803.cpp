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
    ifstream input("DATA.in");
    map<int, int> mp;
    int x;
    while (input >> x) {
        mp[x]++;
    }
    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}