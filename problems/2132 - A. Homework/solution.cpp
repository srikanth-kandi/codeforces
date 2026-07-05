// https://codeforces.com/problemset/problem/2132/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, n, m;
    cin >> tc;
    string a, b, c, ans;
    while (tc--) {
        cin >> n;
        cin >> a;
        cin >> m;
        cin >> b;
        cin >> c;
        for (int i = 0; i < c.size(); i++) {
            if (c[i] == 'V')
                a = b[i] + a;
            else
                a = a + b[i];
        }
        cout << a << endl;
    }
    return 0;
}