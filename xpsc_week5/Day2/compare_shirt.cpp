#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long 
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(s1==s2) cout<<"="<<endl;
        else if(s1[s1.size()-1]==s2[s2.size()-1])
        {
            if(s1[s1.size()-1]=='S') 
            {
                if(s1.size()>s2.size()) cout<<"<"<<endl;
                else cout<<">"<<endl;
            }
            if(s1[s1.size()-1]=='L') 
            {
                if(s1.size()>s2.size()) cout<<">"<<endl;
                else cout<<"<"<<endl;
            }
        }
        else
        {
            if(s1[s1.size()-1]=='S') cout<<"<"<<endl;
            else if(s1[s1.size()-1]=='L') cout<<">"<<endl;
            else 
            {
                if(s1[s1.size()-1]=='M')
                {
                    if(s2[s2.size()-1]=='L') cout<<"<"<<endl;
                    else cout<<">"<<endl;
                }
            }
        }
    }
}