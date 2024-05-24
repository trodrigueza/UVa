#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve() {
  int n, m; cin >> n >> m;
  vector<vector<int>> M(m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int a; cin >> a;
      M[j].push_back(a);
    }
  }
  
  set<vector<int>> S(M.begin(), M.end());
  if ((int)S.size() != m) {
    cout << "No\n";
    return;
  }

  for (int i = 0; i < m; i++) {
    int s = accumulate(M[i].begin(), M[i].end(), 0);
    if (s != 2) {
      cout << "No\n";
      return;
    }
  }
  cout << "Yes\n";
}

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--) {
    solve();
  }
}
