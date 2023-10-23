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

        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        long long ans = 0;

        int L = 0, R = n-1;
        while(R > L)
        {
            ans += arr[R] - arr[L];
            L++;
            R--;

        }

        cout << ans << "\n";


    }
   return 0;

}
