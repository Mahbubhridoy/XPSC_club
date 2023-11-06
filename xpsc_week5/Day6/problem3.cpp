#include<bits/stdc++.h>
using namespace std;

bool check(int mid, int x[], int n, int c) {
    int cows = 1, last = x[0];
    for(int i = 1; i < n; i++) {
        if(x[i] - last >= mid) {
            if(++cows == c)
                return true;
            last = x[i];
        }
    }
    return false;
}

int solve(int x[], int n, int c) {
    sort(x, x+n);
    int start = 0, end = x[n-1] - x[0], ans = 0;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(check(mid, x, n, c)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, c;
        cin >> n >> c;
        int x[n];
        for(int i = 0; i < n; i++)
            cin >> x[i];
        cout << solve(x, n, c) << "\n";
    }
    return 0;
}
