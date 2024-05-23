#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int ans = (n-2)/3 + ((n-2)%3 != 0); 
        ans *= (m-2)/3 + ((m-2)%3 != 0);
        printf("%i\n", ans);
    }
}
