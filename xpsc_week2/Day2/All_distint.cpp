#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int test;cin >> test;
    while(test--){
        int n; cin >> n;
        map<int , int >mp;
        for(int i=0; i<n; i++){
            int a; cin >> a;
            mp[a]++;
        }
        int count = 0;
        int even = 0;
        for( auto it: mp){
            if(it.second % 2 != 0){  // value ta even na hoye jodi odd hoy...
                count ++ ;
            }
            else{
                even++;
            }
        }
        cout << count + ((even)/2 * 2) << "\n";

    }
        return 0;
}