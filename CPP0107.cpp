#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int de101[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};

int de102[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int made;
        cin >> made;
        double score = 0;
        if (made == 101) {
            int track = 0;
            for (int i = 1; i <= 15; i++) {
                char dapan;
                cin >> dapan;
                if (dapan == de101[track])
                    score += (double)10 / 15;
                ++track;
            }
        }
        if (made == 102) {
            int track = 0;
            for (int i = 1; i <= 15; i++) {
                char dapan;
                cin >> dapan;
                if (dapan == de102[track])
                    score += (double)10 / 15;
                ++track;
            }
        }
        cout << fixed << setprecision(2) << score << endl;
    }
    return 0;
}