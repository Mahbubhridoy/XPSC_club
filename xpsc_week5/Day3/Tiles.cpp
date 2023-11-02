#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        int first=s[0];
        int last=s[s.size()-1];
        int cnt=2;
        int score;
        vector<pair<int,int>>ind;
        if(first<last) 
        {
            score=last-first;
            for(int i=1; i<=s.size()-2; i++)
            {
                if(s[i]>=s[0] && s[i]<=s[s.size()-1])
                {
                    cnt++;
                   ind.push_back(make_pair((int)s[i],i+1));
                }
            }
            sort(ind.begin(),ind.end());
            cout<<score<<" "<<cnt<<endl;
            cout<<"1 ";
            for(auto u:ind) cout<<u.second<<" ";
            cout<<s.size();
            cout<<endl;
        }
        else
        {
            score=first-last;
            for(int i=1; i<=s.size()-2; i++)
            {
                if(s[i]>=s[s.size()-1] && s[i]<=s[0])
                {
                     cnt++;
                    ind.push_back(make_pair((int)s[i],i+1));
                }    
            }
            sort(ind.rbegin(),ind.rend());
            cout<<score<<" "<<cnt<<endl;
            cout<<"1 ";
            for(auto u:ind) cout<<u.second<<" ";
            cout<<s.size();
            cout<<endl;
        }
    }
}