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
        long long n, Lcnt = 0, Rcnt = 0, mx_value = 0, j = 0;
        cin >> n;
        string str;
        cin >> str;

        if(str.size() < 2)
        {
            cout << "0\n";
            continue;
        }
        if(n%2 == 0)
        {
            for(int i = n-1; i >= n/2; i--)
            {
                mx_value += i;
            }
            mx_value *= 2;
        }
        else
        {
            for(int i = n-1; i > n/2; i--)
            {
                mx_value += i;
            }
            mx_value *= 2;
            mx_value += n/2;


        }
        vector<long long> v(n, 0), v1;

        for(int i = 0; i < n/2; i++)
        {
            if(str[i] == 'L')
            {
                Lcnt++;
                int x = i+1;
                int y = n - x;
                x = x - 1;
                v1.push_back(abs(y-x));

            }
        }

        for(int i = (n/2); i < n; i++)
        {
            if(str[i] == 'R')
            {
                Rcnt++;
                int x = i+1;
                int y = n - x;
                x = x - 1;
                v1.push_back(abs(y-x));

            }
        }

        sort(v1.begin(), v1.end());
        v1.pop_back();

        for(int i = v1.size(); i < n; i++)
            v[i] = mx_value;

        for(int i = v1.size()-1; i >= 0; i--)
        {
            v[i] = abs(mx_value - v1[j]);
            mx_value -= v1[j];
            j++;
        }

        for(auto value : v)
            cout << value << " ";

        cout << "\n";
}
   return 0;

}
