#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test;
    cin >> test;

    while(test--)
    {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n), b(n);
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back({a[i], i});
        }

        sort(v.begin(), v.end());

        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        int ans[n];
        for(int i = 0; i < n; i++)
        {
            int ind = v[i].second;
           ans[ind] = b[i];
        }

        for(int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
}
   return 0;

}
