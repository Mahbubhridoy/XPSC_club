#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int test; cin >> test;
    while(test--){
            int n; cin >> n;
            string s; cin >> s;
            sort(s.begin(), s.end());
            string s1="Timur" ;
            sort(s1.begin(),s1.end());
              if(s==s1){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
 
    }
        return 0;
}