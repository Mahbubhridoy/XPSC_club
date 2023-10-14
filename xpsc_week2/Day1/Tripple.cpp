#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int test; cin >> test;
    while(test--){
        int n;
        cin >> n;
        map<int , int>mp;
        for(int i=0; i<n; i++){
            int a;
            cin >> a;
            mp[a]++;
        }
        int ans = -1;
        for(auto i: mp){
            if(i.second > 2){
                ans = i.first;
            }
        }
        cout << ans << "\n";
      }
   return 0;
}

