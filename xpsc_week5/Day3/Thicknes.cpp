#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &it : a) cin>>it;
        int ans=n;
        ll segmentsum=0;
        for(int i=0; i<n; i++)
        {
            segmentsum+=a[i];
            bool possible=false;
            ll sum=0;
            int len=0,maxlen=i+1;
            for(int j=i+1; j<n; j++)
            {
                if(sum+a[j]>segmentsum) break;
                if(j==n-1 && sum+a[j]==segmentsum)
                {
                    maxlen=max(maxlen,len+1);
                    possible=true;
                    break;
                }
                else
                {
                    sum+=a[j];
                    len++;
                    if(sum==segmentsum)
                    {
                        maxlen=max(maxlen,len);
                        len=0;
                        sum=0;
                    }
                }
            }
            if(possible) ans=min(ans,maxlen);
        }
        cout<<ans<<endl;
    }
}
