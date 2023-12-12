#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

bool nt(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

int main() {
    int n;
    cin >> n;
    if (nt(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}