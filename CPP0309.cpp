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
    int t;
    cin >> t;
    cin.ignore(1);
    while (t--) {
        char c[1005];
        fgets(c, 1005, stdin);
        c[strlen(c) - 1] = '\0';
        int cnt = 0;
        char *word = strtok(c, " \t\n");
        while (word != NULL) {
            ++cnt;
            word = strtok(NULL, " \t\n");
        }
        cout << cnt << endl;
    }
    return 0;
}