#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define int long long
int32_t main(){
    fast();
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &it : a) cin>>it;
        priority_queue<int>bonus;
        int ans=0;
        for(auto u:a){
            if(u==0)
            {
                if(!bonus.empty()){
                    ans+=bonus.top();
                    bonus.pop();
                }
            }
            else bonus.push(u);
        }
        cout<<ans<<endl;
    }
}