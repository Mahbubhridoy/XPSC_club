#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() {
    fast();
    int test;
    cin >> test;
    while (test--) {
        string s; cin >> s;
        string s1 = "314159265358979323846264338327";
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s1[i] == s[i]) {
                count++;
            }
            else{
                break;
            }
        }

        cout << count << "\n";
    }

    return 0;
}
