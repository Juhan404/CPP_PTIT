#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

bool check(int n) {
    if (n % 100 == 86)
        return 1;
    else
        return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << check(n) << endl;
    }
    return 0;
}