// https://codeforces.com/problemset/problem/2126/A

#include <iostream>

using namespace std;

int main() {
    long long t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        int y = 9;
        do {
            int d = x % 10;
            if (d < y)
                y = d;
            x /= 10;
        } while (x > 0);
        cout << y << endl;
    }
    return 0;
}
