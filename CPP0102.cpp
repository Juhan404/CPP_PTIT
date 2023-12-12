#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char c;
        cin >> c;
        if (c > 64 && c < 91)
            cout << (char)(c + 32) << endl;
        else
            cout << (char)(c - 32) << endl;
    }
    return 0;
}