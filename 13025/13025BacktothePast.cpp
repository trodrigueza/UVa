#include <bits/stdc++.h>
using namespace std;

int main() {
    printf("May 29, 2013 Wednesday\n");
    int q = 29;
    int m = 5;
    int K = 13;
    int J = 20;
    int d = (q + (int)floor(13*(m+1)/5) + K + (int)floor(K/4) + (int)floor(J/4) - 2*J) % 7;
    //cout << d;
    // saturday = 0 ...
    return 0;
}
