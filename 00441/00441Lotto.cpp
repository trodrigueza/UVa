#include<bits/stdc++.h>
using namespace std;

#define ll long long

int32_t main() {
    int k; cin >> k;
    while (k) {
        vector<int> A(k);
        for (int i = 0; i < k; i++) {
            cin >> A[i];
        }

        for (int a = 0; a < k-5; a++) {
            for (int b = a+1; b < k-4; b++) {
                for (int c = b+1; c < k-3; c++) {
                    for (int d = c+1; d < k-2; d++) {
                        for (int e = d+1; e < k-1; e++) {
                            for (int f = e+1; f < k; f++) {
                                cout << A[a] << " " << A[b] << " " << A[c] << " " << A[d] << " " << A[e] << " " << A[f] << "\n";
                            }
                        }
                    }
                }
            }
        }


        cin >> k;
        if (k) cout << "\n";
    }
}
