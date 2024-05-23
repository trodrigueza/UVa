#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

void solve(int n, int m) {
  unordered_map<int, vector<int>> mp;
  for (int i = 1; i <= n; i++) {
    int ai; scanf("%d", &ai);
    mp[ai].push_back(i);
  }
  int k, v; 
  while (m--) {
    scanf("%d %d", &k, &v);
    if (mp.find(v) == mp.end()) cout << "0\n";
    else if ((int)mp[v].size() < k) printf("0\n");
    else printf("%d\n", mp[v][k-1]);
  }
}

int32_t main() {
  int n, m;
  while (scanf("%d %d", &n, &m) != EOF) {
    solve(n, m);
  }
  return 0;
}
