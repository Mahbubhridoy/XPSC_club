#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int arr[N+10];

int solve(int n, map<int, int> mp)
{
    int cnt = 0;
    set<int> st;
    for(int i = 0; i < n; i++)
        st.insert(arr[i]);

    while(!st.empty())
    {
        int elem = *st.begin();

        while(mp[elem] != 0)
        {
            mp[elem]--;
            if(mp[elem] == 0)
            {
                st.erase(elem);
                mp.erase(elem);
            }
            elem++;
        }

        cnt++;
    }

    return cnt;

}


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
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        sort(arr, arr+n);

        cout << solve(n, mp) << "\n";

 }

  return 0;

}

