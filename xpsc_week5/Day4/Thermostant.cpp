#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
typedef pair<int, int> pi;
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll l,r,x;
        cin>>l>>r>>x;
        ll a,b;
        cin>>a>>b;
        vector<ll>v(4);
        v[0]=(abs(l-a));
        v[1]=(abs(r-a));
        v[2]=(abs(l-b));
        v[3]=(abs(r-b));
        int p1=(abs(a-b));
        if(a==b) cout<<"0"<<endl;
        else if(p1>=x) cout<<"1"<<endl;
        else if((v[0]<x && v[1]<x) || (v[2]<x && v[3]<x)) cout<<"-1"<<endl;
        else
        {
            if(v[0]<x)
            {
                if(v[3]>=x) cout<<"2"<<endl;
                else cout<<"3"<<endl;
            }
            else if(v[1]<x) 
            {
                if(v[2]>=x) cout<<"2"<<endl;
                else cout<<"3"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
        }
    }
}