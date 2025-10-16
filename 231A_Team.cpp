#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    int r = 0;
    while (t--) {
        int one = 0;
        int two = 0;
        int three = 0;
        cin >> one >> two >> three;
        if (one+two+three > 1)
            r++;
    }
    cout << r;
    return 0;
}