#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    int x = 0;
    while (t--) {
        string s;
        cin >> s;
        if (s.back() == '+' || s[0] == '+')
            x++;
        else
            x--;
    }
    cout << x;
    return 0;
}
