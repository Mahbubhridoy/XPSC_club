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
        long long int num,i=0,ans;
        cin >> num;

        while(1)
        {
            if(pow(10,i) > num)
            {
                ans = num - pow(10,i-1);
                break;
            }

            i++;
        }

        cout << ans << "\n";

    }




    return 0;
}
