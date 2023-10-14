#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int test;cin>>test;
    while(test--){
         int a,b,c,d,cnt=0;
        cin >> a >> b >> c >> d;
 
        if(b > a)
            cnt++;
        if(c > a)
            cnt++;
        if(d > a)
            cnt++;
 
 
        cout << cnt << "\n";
 

    }
        return 0;
}