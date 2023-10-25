#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin>>test;

    while(test--)
    {
        map<long long, long long>mp;
        int n,cnt=0;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];

        for(int i=n-1; i>=0; i--)
        {
            if(mp.count(arr[i]) == 0)
                cnt++;
            else
                break;

            mp[arr[i]]++;

        }

        cout << n-cnt << "\n";



    }

    return 0;
}
