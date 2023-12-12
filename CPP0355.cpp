#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

void lower(string &str) {
    for (char &x : str) {
        x = tolower(x);
    }
}

int main() {
    fastsync();
    string str;
    vector<string> v;
    while (cin >> str) {
        lower(str);
        v.push_back(str);
    }
    bool check = 1;
    for (string x : v) {
        if (x[x.size() - 1] == '.' || x[x.size() - 1] == '!' || x[x.size() - 1] == '?') {
            if (check) {
                x[0] = toupper(x[0]);
            }
            x.erase(x.end() - 1);
            if (x != " ")
                cout << x;
            cout << endl;
            check = 1;
        }
        else {
            if (check) {
                x[0] = toupper(x[0]);
                cout << x << ' ';
                check = 0;
            }
            else
                cout << x << ' ';
        }
    }
    return 0;
}