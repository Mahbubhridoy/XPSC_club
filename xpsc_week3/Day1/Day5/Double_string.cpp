#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test,n;
    cin>> test;

    while(test--)
    {
        map<string, int> mp;
        long long int n,flag=false;
        cin >> n;
        string str[n],ans = "";
        for(int i=0; i<n; i++)
        {
            cin >> str[i];
            mp[str[i]]++;
        }

        for(long long int i=0; i<n; i++)
        {
            flag = false;
            string temp = str[i];
            for(long long int j=1; j<temp.size(); j++)
            {
                string s1 = temp.substr(0,j);
                string s2 = temp.substr(j,temp.size()-j);

                if(mp.find(s1) != mp.end())
                    if(mp.find(s2) != mp.end())
                        flag = true;

            }

            if(flag)
                ans += "1";
            else
                ans += "0";

        }

        cout << ans << "\n";

    }




    return 0;
}
