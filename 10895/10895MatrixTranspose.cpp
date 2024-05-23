#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int m;
  while (cin >> m) {
    int n; cin >> n;
    vector<vector<int>> T(n + 1);
    vector<vector<int>> V(n + 1);
    for (int i = 1; i <= m; i++) {
      int r; cin >> r;
      queue<int> q;
      for (int j = 0; j < r; j++) {
        int rw; cin >> rw;
        q.push(rw);
        T[rw].push_back(i);
      }
      for (int j = 0; j < r; j++) {
        int vl; cin >> vl;
        V[q.front()].push_back(vl);
        q.pop();
      }
    }
    
    cout << n << " " << m << "\n";
    for (int i = 1; i <= n; i++) {
      int N = (int)T[i].size();
      cout << N << (!N  ? "" : " ");
      if (!N) {cout << "\n\n"; continue;}
      for (int j = 0; j < N-1; j++)
        cout << T[i][j] << " ";
      cout << T[i][N-1] << "\n";

      for (int j = 0; j < N-1; j++) 
        cout << V[i][j] << " ";
      cout << V[i][N-1] << "\n";
    }
  }
}
