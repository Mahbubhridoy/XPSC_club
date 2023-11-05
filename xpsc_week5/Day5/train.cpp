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
        long long n, q, x, y;
        cin >> n >> q;
        map<int, int> mp, m;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            if(mp[x] == 0)
            {
                mp[x] = i+1;
            }
            m[x] = i+1;
        }

        while(q--)
        {
            cin >> x >> y;

            if(mp[x] != 0 && mp[y] != 0)
            {
                if(m[y] >= mp[x])
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            else
                cout << "NO\n";
        }



    }




    return 0;

}
