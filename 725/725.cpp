#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int N, f = 0;
  while (true) {
    cin >> N;
    int cn = 0;
    if (!N) return 0;
    if (f) cout << "\n";
    f = 1;
    for (int fghij = 1234; fghij <= 98765; fghij++) {
      int abcde = N*fghij;
      int tmp, check = ((fghij < 10000) || (abcde < 10000));
      tmp = abcde; while (tmp) {check |= (1 << (tmp % 10)); tmp /= 10;}
      tmp = fghij; while (tmp) {check |= (1 << (tmp % 10)); tmp /= 10;}
      
      if (check == ((1 << 10) - 1) && abcde < 100000) {
        cout << abcde << " / " << (fghij < 10000 ? "0" : "") << fghij << " = " << N << "\n";
        cn++;
      }
    }
    if (!cn) cout << "There are no solutions for " << N << ".\n";
  }
}
