#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


unordered_map<int, int> facs;

void fac(int m) {
    int m_ = m;
    for (int i = 2; i * i <= m_; i++) {
        while (m % i == 0) {
            facs[i]++;
            m /= i;
        }
    }
    if (m > 1) facs[m]++;
}

int legendre(int n, int p) {
    int sum = 0;
    int i = 1;
    while (true) {
        int x = n / pow(p, i);
        i++;
        sum += x;
        if (x == 0) break;
    }
    return sum;
}

int32_t main() {
    int n, m;
    while (cin >> n >> m) {
        bool f = 0;
        fac(m);
        for (auto &prime : facs) {
            //cout << prime << "^" << power << "  ";
            int vp = legendre(n, prime.first);
            if (prime.second > vp) {
                cout << m << " does not divide " << n << "!\n";
                f = 1;
                break;
            }
        }
        if (!f) cout << m << " divides " << n << "!\n";
        facs.clear();
    }
}
