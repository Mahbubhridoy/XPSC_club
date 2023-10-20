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
         int n, k;
         cin >> n >> k;
         string str;
         cin >> str;

         vector<int> a(26, 0), b(26, 0);
         for(int i = 0; i < n; i++)
         {
             if(str[i] >= 'A' && str[i] <= 'Z')
                b[str[i] - 'A']++;
             else
                a[str[i] - 'a']++;
         }

         int ans = 0;
         for(int i = 0; i < 26; i++)
         {
             if(a[i] >= b[i])
             {
                 ans += b[i];
                 a[i] -= b[i];
                 b[i] = 0;

             }
             else
             {
                 ans += a[i];
                 b[i] -= a[i];
                 a[i] = 0;

             }
         }

         int temp = 0;
         for(int i = 0; i < 26; i++)
         {
             temp += a[i] / 2;
         }


         for(int i = 0; i < 26; i++)
         {
             temp += b[i] / 2;
         }
         if(temp >= k)
         {
             ans += k;
         }
         else
         {
             ans += temp;
         }

         cout << ans << "\n";
   }

  return 0;

}
