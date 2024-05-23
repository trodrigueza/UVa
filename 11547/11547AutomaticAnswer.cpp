#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
    int t; scanf("%i", &t);
    while(t--) {
        int n; scanf("%i", &n);
        printf("%i\n", abs((((((n*567/9)+7492)*235/47)-498)%100)/10));
    }
}
