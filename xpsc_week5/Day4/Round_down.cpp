#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
typedef pair<int, int> pi;
int main()
{
    optimize();
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
