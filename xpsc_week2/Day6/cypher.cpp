#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int test;cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &it : a) cin>>it;
        for(int j=0; j<n; j++)
        {
            int b;
            cin>>b;
            string s;
            cin>>s;
            for(int i=0; i<b; i++)
            {
                if(s[i]=='D')
                {
                    if(a[j]==9) a[j]=0;
                    else a[j]++;
                }
                if(s[i]=='U')
                {
                    if(a[j]==0) a[j]=9;
                    else a[j]--;
                }
            }
        }
        for(auto u:a) cout<<u<<" ";
        cout<<endl;

    }
        return 0;
}