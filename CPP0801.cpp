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
    fastsync();
    fstream in, out;
    in.open("PTIT.in", ios::in);
    out.open("PTIT.out", ios::out);
    string s;
    while (getline(in, s))
        out << s << endl;
    return 0;
    in.close();
    out.close();
    return 0;
}