#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int INF = 1e9;
const ll LLINF = 4e18;
const double EPS = 1e-9;

void solve() {
    ll n, k; cin >> n >> k;
    ll ans = k^(k >> 1);
    cout << ans << "\n";
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    #ifdef ONPC
    cerr << endl << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
    #endif

    return 0;
}
