#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

string giaithua(char a) {
    if (a == '0' || a == '1')
        return "1";
    else if (a == '2')
        return "2";
    else if (a == '3')
        return "3";
    else if (a == '4')
        return "322";
    else if (a == '5')
        return "5";
    else if (a == '6')
        return "53";
    else if (a == '7')
        return "7";
    else if (a == '8')
        return "7222";
    else if (a == '9')
        return "7332";
}

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n;
        string a;
        cin >> n >> a;
        string tmp = "";
        for (int i = 0; i < a.length(); ++i)
            tmp += giaithua(a[i]);
        sort(tmp.begin(), tmp.end(), greater<char>());
        while (tmp[tmp.length() - 1] == '1')
            tmp.erase(tmp.end() - 1);
        cout << tmp << endl;
    }
    return 0;
}