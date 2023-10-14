#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main()
{
    fast();
    int test; cin >> test;
    while(test--)
    {
        int n; cin >> n;
        vector<int>v;
        for(int i=0; i<n; i++){
            int a; cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for(int i=0; i<n; i++){
            ans+= v[i] - v[0];
        }
        cout << ans << "\n";
        

    }
        return 0;
}