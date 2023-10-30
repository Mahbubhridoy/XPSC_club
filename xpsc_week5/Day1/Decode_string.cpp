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
        string str, ans;
        cin >> str;

        for(int i=n-1; i>=0; )
        {
            if(str[i] == '0' && str[i-1] == '0')
            {
                ans += ((str[i-2] - '0')*10) + 96;
                i-=3;

            }
            else if(str[i] == '0' && str[i-1] != '0')
            {

                int num = (((str[i-2] - '0')*10) + (str[i-1] - '0'));
                ans += (num + 96);
                i -= 3;

            }
            else
               {
                   ans += ((str[i] - '0') + 96);
                   i--;

               }
               if(i < 0)
                break;

        }
        reverse(ans.begin(), ans.end());

        cout << ans << "\n";


    }

    return 0;
}
