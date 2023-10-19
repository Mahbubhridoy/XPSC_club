#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
const double PI = 2 * acos(0.0);

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.length() == 1) {
            cout << 0 << '\n';
        }
        else {
            int sum = 0;
            for (auto i : s) {
                sum += (i - '0');
            }

            int cnt = 1;
            while (sum >= 10) {
                cnt++;
                int n = sum;
                sum = 0;
                while (n > 0) {
                    sum += (n % 10);
                    n /= 10;
                }
            }

            cout << cnt << '\n';
        }
    }

    return 0;
}

