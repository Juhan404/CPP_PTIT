#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long

// #include <debug.h>
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

int matrix(int M[][100], int n) {
    int A[100] = {0}, B[100] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i] += M[i][j];
            B[j] += M[i][j];
        }
    }
    int smax = 0;
    for (int i = 0; i < n; i++)
        if (A[i] > smax)
            smax = A[i];
    for (int i = 0; i < n; i++)
        if (B[i] > smax)
            smax = B[i];
    int sum = 0, i = 0, j = 0;
    while (i < n && j < n) {
        int a = max(smax - A[i], smax - B[j]);
        A[i] += a;
        B[j] += a;
        sum += a;
        if (A[i] == smax)
            i++;
        if (B[j] == smax)
            j++;
    }
    return sum;
}

void run_case() {
    int n;
    cin >> n;
    int M[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> M[i][j];
    cout << matrix(M, n) << endl;
}

int main() {
    fastsync();
    int Test;
    cin >> Test;
    for (int test = 1; test <= Test; ++test) {
        run_case();
    }
    return 0;
}