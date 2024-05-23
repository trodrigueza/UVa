#include <bits/stdc++.h>
using namespace std;

void solve(int C) {
    string input = "";
    stack<string> cards;
    for (int i = 0; i < 52; i++) {
        string card; cin >> card;
        cards.push(card);
    }
    stack<string> first25;
    for (int i = 0; i < 25; i++) {
        first25.push(cards.top());
        cards.pop();
    }
    int Y = 0;
    for (int i = 0; i < 3; i++) {
        int X;
        if (isdigit(cards.top()[0])) X = cards.top()[0] - '0';
        else X = 10;
        Y += X;
        cards.pop();
        for (int j = 0; j < 10 - X; j++)
            cards.pop();
    }
    while (cards.size()) {
        first25.push(cards.top());
        cards.pop();
    }
    string ans;
    for (int i = 0; i < Y; i++) {
        ans = first25.top();
        first25.pop();
    }
    cout << "Case " << C << ": " << ans;
}

int main() {
    ios::sync_with_stdio(0);
    int t; cin >> t;
    int C = 1;
    while (t--) {
        solve(C);
        C++;
        if (C != t) cout << "\n";
    }
    #ifdef ONPC
    cerr << endl << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
    #endif

    return 0;
}
