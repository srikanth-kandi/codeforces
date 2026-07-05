// https://codeforces.com/problemset/problem/1933/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, sum;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> arr(n);
        sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        if (sum % 3 == 0)
            cout << 0 << endl;
        else if (sum % 3 == 2)
            cout << 1 << endl;
        else { // if remainder is 1
            bool exists = false;
            for (auto x: arr) {
                if ((sum - x) % 3 == 0) {
                    exists = true;
                    break;
                }
            }
            if (exists)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}