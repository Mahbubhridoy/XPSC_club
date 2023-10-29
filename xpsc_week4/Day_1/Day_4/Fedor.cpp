#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main() {

    int n, m, k; cin >> n >> m >> k;
    int a[m + 1];
    for(int i = 0; i <= m; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 0; i < m; i++) {
        int x = a[m] ^ a[i];
        if(__builtin_popcount(x) <= k) {
            cnt++;
        }
    }
    cout << cnt << '\n';
}