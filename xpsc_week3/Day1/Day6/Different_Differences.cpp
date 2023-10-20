#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int arr[N];
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
        int diff = 1;
        for(int i = 0; i < n; i++)
        {
            v.push_back(i+diff);
            diff += i;
        }

        for(int i = k - 1; i>= 0; i--)
        {
            if(v[i] > n)
            {
                arr[i] = n;
                n--;
            }
            else
            {
                arr[i] = v[i];
            }
        }

        for(int i = 0; i < k; i++)
            cout << arr[i] << " ";

        cout << "\n";


    }

    return 0;

}
