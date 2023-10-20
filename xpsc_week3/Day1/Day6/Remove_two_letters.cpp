#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int arr[N+10];

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
        string str;
        cin >> str;
        int ans = 1;

        for(int i = 1; i < n-1; i++)
        {
            if(str[i-1] == str[i+1])
            {
                continue;
            }
            else
                ans++;
        }

        cout << ans << "\n";


    }


    return 0;

}

