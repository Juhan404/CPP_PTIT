#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

bool check(int n) {
    int chan = 0, le = 0;
    while (n) {
        if (n % 10 % 2 == 0)
            ++chan;
        else
            ++le;
        n /= 10;
    }
    if (le == chan)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    cin >> n;
    int down = 0;
    for (int i = pow(10, n - 1); i < pow(10, n); i++) {
        if (check(i)) {
            cout << i << ' ';
            ++down;
            if (down == 10) {
                cout << endl;
                down = 0;
            }
        }
    }
    return 0;
}