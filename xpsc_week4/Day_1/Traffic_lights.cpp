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
        int n, mx = 0;
        char ch;
        cin >> n >> ch;
        string str, s;
        cin >> str;
        s = str + str;
        vector<int> v;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == 'g')
            {
                v.push_back(i+1);
            }
        }
        for(int i=0; i<n; i++)
        {
            if(str[i] == ch)
            {

                for(int j=0; j<v.size(); j++)
                {
                    if(v[j] > i)
                    {
                        mx = max(mx, (v[j] - i));
                        break;
                    }

                }

            }

        }
        cout << mx - 1 << "\n";
}
    return 0;
}
