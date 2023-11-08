#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    set<int>s1,s0;
    for(auto &it : a) cin>>it;
    for(auto &it : b) cin>>it;
    for(int i=0; i<n; i++)
    {
        int x=a[i]-b[i];
        if(b[i]>0) s1.insert(x);
        else s0.insert(a[i]);
    }
    if(s1.size()==0) cout<<"YES"<<endl;
    else if(s1.size()==1 && *(s1.rbegin())>=0)
    {
        if(s0.size()==0 || (*(s0.rbegin())<=*(s1.rbegin()))) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}   
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}