#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int test = 1;//cin>>test;
    while(test--){
        int k; cin >> k;
    int ans = 0;
    for (int a = 1; a <= k; a++) {
        for (int b = 1; b <= k; b++) {
            for (int c = 1; c <= k; c++) {
                ans +=__gcd(a,__gcd( b, c));
            }
        }
    }
    cout << ans << "\n";

    }
        return 0;
}