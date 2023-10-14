#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main() {
    fast();
    int test;
    cin >> test;
    while (test--) {
        int n, s, r;
        cin >> n >> s >> r;
        int max = s - r;
        cout << max << " ";
        n--;
        vector<int> arr(n, 1);
        r = r - n;
        int rem = 0;//rem=remaining r
        for (int i = 1; i <= r; i++) {
            if (arr[rem] != max) {
                arr[rem]++;
            } else {
                rem++;
                arr[rem]++;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

