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
        int arr[n];
        string str, s;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            s += '0';
        }

        cin >> str;

        for(int i=0; i<n; i++)
        {
            char ch = str[i];
            int num = arr[i];
            for(int j=0; j<n; j++)
            {
                if(arr[j] == num)
                {
                    if(s[j] == '0')
                        s[j]= ch;
                }
            }


        }
        if(str == s)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";






    }



    return 0;
}
