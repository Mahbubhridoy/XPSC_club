#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int test=1;
    while(test--){
        int n;
        cin>>n;
        vector<int> a(n+1);
        for (int i=1; i<=n; i++){
            cin>>a[i];
        }
        for(int i=1; i<=n; i++){
            a[i]=a[i]+a[i-1];
        }
        int q;
        cin>>q;
        while(q--){
            int x,y;
            cin>>x>>y;
            x++,y++;
            cout << a[y]-a[x-1] << endl;
        }
    }
        return 0;
}