#include <bits/stdc++.h>
using namespace std;

map<char, int> Roms = {
    { 'I', 1 },
    { 'V', 5 },
    { 'X', 10 },
    { 'L', 50 },
    { 'C', 100 },
    { 'D', 500 },
    { 'M', 1000}
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    string s;
    while (cin >> s) {
        if (s[0] == 'I' || s[0] == 'V' || s[0] == 'X' || s[0] == 'L' || s[0] == 'C' || s[0] == 'D' || s[0] == 'M') {
            int n = 0;
            for (int i = 0; i < (int)s.length() - 1; i++) {
                if (Roms[s[i]] < Roms[s[i+1]]) n -= Roms[s[i]];
                else n += Roms[s[i]];
            }
            n += Roms[s[(int)s.length() - 1]];
            cout << n << "\n";
        } else {
            string n = "";
            string z = "";
            for (int i = 0; i < 4 - (int)s.length(); i++) {
                z += '0';
            }
            s = z + s;
            int s0 = s[0] - '0';
            int s1 = s[1] - '0';
            int s2 = s[2] - '0';
            int s3 = s[3] - '0';
            for (int i = 0; i < s0; i++) n += 'M';
            
            if (s1 == 9) n += "CM";
            else if (s1 >= 5) {
                n += 'D';
                for (int i = 0; i < s1 - 5; i++) n += 'C';
            } else if (s1 == 4) n += "CD";
            else {
                for (int i = 0; i < s1; i++) n += 'C';
            }
            
            if (s2 == 9) n += "XC";
            else if (s2 >= 5) {
                n += "L";
                for (int i = 0; i < s2 - 5; i++) n += 'X';
            } else if (s2 == 4) n += "XL";
            else {
                for (int i = 0; i < s2; i++) n += 'X';
            }

            if (s3 == 9) n += "IX";
            else if (s3 >= 5) {
                n += "V";
                for (int i = 0; i < s3 - 5; i++) n += "I";
            } else if (s3 == 4) n += "IV";
            else {
                for (int i = 0; i < s3; i++) n += "I";
            }
            
            cout << n << "\n";
        }
    }

    return 0;
}
