#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int test;
    cin >> test;
    while(test--)
    {
        int num,i=9,arr[10],j=0;
        cin >> num;

        while(num)
        {
            if(num - i > 0)
            {
                num -= i;

                arr[j] = i;
                j++;
                i--;
            }
            else
                break;

        }
        arr[j] = num;

        for(int i=j; i>=0; i--)
            cout << arr[i];
        cout << "\n";


    }


    return 0;
}
