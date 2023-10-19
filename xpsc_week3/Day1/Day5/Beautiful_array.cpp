#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test;
    cin >> test;

    while(test--)
    {
        int n;
        cin >> n;

        int cnt1 = 0, cnt2 = 0, mn = INT_MAX;
        vector<int> arr(n), odd, even;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0)
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
            mn = min(mn, arr[i]);
        }

        if(cnt1 == n || cnt2 == n)
        {
            cout << "YES\n";
            continue;
        }

        if(mn % 2 != 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
}

  return 0;

}
