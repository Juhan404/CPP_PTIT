#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int n, k;
int a[25];

void display() {
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << ' ';
}

void test(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k)
            display();
        else
            test(i + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int &x : a)
            x = 0;
        test(1);
        cout << endl;
    }
    return 0;
}