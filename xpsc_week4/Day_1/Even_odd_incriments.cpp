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
        long long n, q, x, y, sum = 0, odd = 0, even = 0;
        cin >> n >> q;
        long long arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if(arr[i]%2 == 0)
                even++;
            else
                odd++;

        }

        while(q--)
        {

            cin >> x >> y;
            if(x == 1)
            {
                sum += (y*odd);
                if(y%2 != 0)
                {
                    even = n;
                    odd = 0;
                }
                cout << sum << "\n";

            }
            else
            {
                sum += (y*even);
                if(y%2 != 0)
                {
                    odd = n;
                    even = 0;
                }
                cout << sum << "\n";

            }


        }
}
    return 0;
}
