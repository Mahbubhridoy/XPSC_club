#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int test=1;
    while(test--){
        int N, X;
        cin >> N >> X;
        vector<int> a(N),ans;
        for(int i=0; i<N; i++){
            cin>>a[i];
            if(a[i]!=X){
                ans.push_back(a[i]);
            }
        }
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
    }
        return 0;
    }