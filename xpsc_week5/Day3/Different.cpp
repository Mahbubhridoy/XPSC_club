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
        int k, n;
        cin >> k >> n;
        vector<int> v;
        if(k == n)
        {
            for(int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else
        {
            int value = 1;
            v.push_back(value);

            for(int i = 1; i < k; i++)
            {
                if(((n - value - i) + 1) >= k - i)
                {
                    v.push_back(value+i);

                    value += i;
                }
                else
                {
                    value++;
                    v.push_back(value);
                }


            }

            for(auto val : v)
                cout << val << " ";

            cout << "\n";
       }
   }

    return 0;

}
