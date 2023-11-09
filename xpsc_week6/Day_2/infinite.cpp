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
        string s,t;
        cin>>s>>t;
        if(t=="a") 
        {
            cout<<"1"<<endl;
            continue;
        }
        bool ok=false;
        for(int i=0; i<t.size(); i++)
        {
            if(t[i]=='a') 
            {
                ok=true;
                break;
            }
        }
        if(ok) cout<<"-1"<<endl;
        else cout<<(ll)round(pow(2*1.0,s.size()))<<endl;
    }
}