#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int mindis = INT_MAX;
        for (int i = 1; i < n; i++) {
            mindis = min(mindis, abs(a[i] - a[i - 1]));
        }
        cout << mindis << endl;
    }
    return 0;
}