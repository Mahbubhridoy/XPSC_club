#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<string>arr;
    for(char c1='a'; c1<='z'; c1++ )
    {
        for(char c2='a'; c2<='z'; c2++)
        {
            if(c1==c2)
            {
                continue;
            }
            else
            {
                string str;
                str=str+c1+c2;
                arr.push_back(str);
            }
        }
    }
    for(int i=0; i<t; i++)
    {
        string s;
        cin>>s;
      for(int i=0; i<650; i++)
      {
        if(s==arr[i])
        {
            cout<<i+1<<endl;
            break;
        }
      }
    }
}