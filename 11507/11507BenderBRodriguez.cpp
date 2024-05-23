#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int32_t main() {
    int L;
    while(scanf("%i", &L)) {
        if (!L) break;
        string pos = "+x";
        for (int i = 0; i < L-1; i++) {
            string cur;
            //scanf("%s", cur.c_str());
            cin >> cur;
            if (pos == "+y") {
                if (cur == "+z" || cur == "-z") {
                    pos = "+y";
                } else if (cur == "+y") {
                    pos = "-x";
                } else if (cur == "-y") {
                    pos = "+x";
                }
            } else if (pos == "-y") {
                if (cur == "+z" || cur == "-z") {
                    pos = "-y";
                } else if (cur == "+y") {
                    pos = "+x";
                } else if (cur == "-y") {
                    pos = "-x";
                }

            } else if (pos == "+z") {
                if (cur == "+y" || cur == "-y") {
                    pos = "+z";
                } else if (cur == "+z") {
                    pos = "-x";
                } else if (cur == "-z") {
                    pos = "+x";
                }

            } else if (pos == "-z") {
                if (cur == "+y" || cur == "-y") {
                    pos = "-z";
                } else if (cur == "+z") {
                    pos = "+x";
                } else if (cur == "-z") {
                    pos = "-x";
                }

            } else if (pos == "+x") {
                if (cur == "+z") {
                    pos = "+z";
                } else if (cur == "-z") {
                    pos = "-z";  
                } else if (cur == "+y") {
                    pos = "+y";
                } else if (cur == "-y") {
                    pos = "-y";
                } 

            } else if (pos == "-x") {
                if (cur == "+z") {
                    pos = "-z";
                } else if (cur == "-z") {
                    pos = "+z";  
                } else if (cur == "+y") {
                    pos = "-y";
                } else if (cur == "-y") {
                    pos = "+y";
                }
            }
        }
        printf("%s\n", pos.c_str());
    }
}
