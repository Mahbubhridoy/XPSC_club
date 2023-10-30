#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int test;
    cin >> test;
    while(test--)
    {
        int n,h,m,ans=0,x;
        cin >> n >> h >> m;
        h = h*60 + m;
        int cnt = 1440;
        for(int i=0; i<n; i++)
        {
            int H,M;
            cin >> H >> M;
            H = H*60+M;
            ans = H - h;
            if(ans < 0)
                ans += 1440;
            if(cnt > ans)
                cnt = ans;



        }

        cout << cnt/60 << " " << cnt%60 << "\n";

    }




    return 0;
}
