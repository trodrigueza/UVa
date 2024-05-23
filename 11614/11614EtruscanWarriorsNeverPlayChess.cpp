#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, r; cin >> n;
        r = (-1+sqrt(1+(4*2*n)))/2;
        cout << r << "\n";
    }
    return 0;
}
