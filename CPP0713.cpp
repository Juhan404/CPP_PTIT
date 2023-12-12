#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int n;
int a[25], used[25];

void display() {
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << ' ';
}

void test(int i) {
    for (int j = 1; j <= n; j++) {
        if (!used[j]) {
            used[j] = 1;
            a[i] = j;
            if (i == n)
                display();
            else
                test(i + 1);
            used[j] = 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        test(1);
        for (int &x : used)
            x = 0;
        cout << endl;
    }
    return 0;
}