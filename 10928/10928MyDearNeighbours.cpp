#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int INF = 1e9;
const ll LLINF = 4e18;

void solve() {
  int p; cin >> p;
  vector<int> g(p, 0);
  int mn = INF;
  
  for (int i = 0; i < p; i++) {
    int num;
    while (cin >> num) {
      g[i]++;
      if (cin.peek() == '\n') break;  
    }
    mn = min(mn, g[i]);
  }
  int f = 0;
  for (int i = 0; i < p; i++) {
    if (g[i] == mn) cout << (f++ ? " " : "") << i+1;
  }
  cout << "\n";
}

int32_t main() {
  ios::sync_with_stdio(0);
    cin.tie(0);
  int t; cin >> t;
  while (t--) {
    solve();
  }
}
