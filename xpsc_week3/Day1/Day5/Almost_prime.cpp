#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define N (int)3000 + 3
int notPrime[N];

void sieve()
{
    notPrime[1] = 1;
    notPrime[2] = 0;

    for (int i = 1; i < N; i++)
    {
        if (!notPrime[i])
        {
            for (int j = i + i; j <= N; j += i)
            {
                notPrime[j]++;
            }
        }
    }
}

void solve()
{
    sieve();

    int n, cnt;
    cin >> n;
    cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (notPrime[i] == 2)
            cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    // cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
