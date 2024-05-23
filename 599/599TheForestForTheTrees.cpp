#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class UnionFind {
private:
  vector<int> p, rank, setSize;
  int numSets;
public:
  UnionFind(int N) {
    p.assign(N, 0); iota(p.begin(), p.end(), 0);
    rank.assign(N, 0);
    setSize.assign(N, 1);
    numSets = N;
  }

  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
  int numDisjointSets() { return numSets; }
  int sizeOfSet(int i) { return setSize[findSet(i)]; }

  void unionSet(int i, int j) {
    if (isSameSet(i, j)) return;
    int x = findSet(i), y = findSet(j);
    if (rank[x] > rank[y]) swap(x, y);
    p[x] = y;
    if (rank[x] == rank[y]) ++rank[y];
    --numSets;
    setSize[y] += setSize[x];
  }
};

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while(t--) {
    string s;
    vector<pair<int, int>> pairs;
    unordered_map<char, int> mp;
    int c = 0;
    while (cin >> s) {
      if (s[0] == '*') break;
      if (mp.find(s[1]) == mp.end()) 
        mp[s[1]] = c++;
      if (mp.find(s[3]) == mp.end()) 
        mp[s[3]] = c++;
      pairs.push_back({mp[s[1]], mp[s[3]]});
    }
    cin >> s;
    int n = ((int)s.size() + 1) / 2;
    UnionFind uf(n);
    for (int i = 0; i < (int)pairs.size(); i++) {
      int a = pairs[i].first;
      int b = pairs[i].second;
      uf.unionSet(a, b);
    }
    
    int trees = 0, acorns = 0, check = 0;
    for (int i = 0; i < n; i++) {
      if (check & 1 << uf.findSet(i)) continue;
      if (uf.sizeOfSet(i) == 1) acorns++;
      else if (uf.sizeOfSet(i) > 1) trees++;
      check |= 1 << uf.findSet(i);
    }
    cout << "There are " << trees << " tree(s) and " << acorns << " acorn(s).\n";
  }
}
