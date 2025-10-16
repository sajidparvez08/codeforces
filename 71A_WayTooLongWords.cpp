#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) {
        string w;
        cin >> w;
        if (w.size() > 10)
            cout << w[0] << w.size()-2 << w.back() << "\n";
        else
            cout << w << "\n";
    }
    return 0;
}
