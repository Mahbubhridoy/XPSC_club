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
        vector<int> arr;

        long long sum = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x == 0)
            {
                continue;
            }
            arr.push_back(x);
            if(x < 0)
                sum += x * -1;
            else
                sum += x;
        }

        int ans = 0, cnt = 0;

        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] < 0)
            {
                cnt++;
            }
            else
            {
               if(cnt)
               {
                   ans++;
               }
               cnt = 0;
            }
        }

        if(cnt)
            ans++;

        cout << sum << " " << ans << "\n";



    }



    return 0;

}
