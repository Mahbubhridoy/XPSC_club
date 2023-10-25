#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];

    int len = (1<<n);

    int flag = false;
    for(int i=0; i<len; i++)
    {
        int time = 0;
        for(int j=0; j<n; j++)
        {
            if((i & (1<<j)) != 0)
                time += v[j];
            else
                time -= v[j];
        }

        if(time == 0 || time%360 == 0)
        {
            flag = true;
            break;
        }

    }
    if(flag)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";


    return 0;
}
