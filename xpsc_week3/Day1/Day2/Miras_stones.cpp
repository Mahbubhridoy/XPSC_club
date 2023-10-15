#include<bits/stdc++.h>
using namespace std;
#define int long long
const long long N = 1e5+10;
const long long M = 1e9+7;
long long arr[N], pre_sum1[N], pre_sum2[N];

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        pre_sum1[i] = arr[i];
        pre_sum2[i] = arr[i];
    }

    for(int i = 1; i < n; i++)
        pre_sum1[i] += pre_sum1[i-1];

    sort(pre_sum2, pre_sum2+n);

    for(int i = 1; i < n; i++)
        pre_sum2[i] +=  pre_sum2[i-1];

    long long m;
    cin >> m;

    while(m--)
    {
        long long t, l, r;
        cin >> t >> l >> r;

        if(t == 1)
        {
            cout << pre_sum1[r-1] - pre_sum1[l-2] << "\n";
        }
        else
        {
            cout << pre_sum2[r-1] - pre_sum2[l-2] << "\n";
        }
    }




    return 0;

}
