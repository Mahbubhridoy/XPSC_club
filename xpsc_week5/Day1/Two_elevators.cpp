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
        long long  a, b, c, lift1 = 0, lift2 = 0;
        cin >> a >> b >> c;

        lift1 = a - 0;

        lift2 = abs(c - b) + (c - 0);

        if(lift2 > lift1)
            cout << "1" << "\n";

        else if(lift1 > lift2)
            cout << "2" << "\n";

        else
            cout << "3" << "\n";


    }


    return 0;
}
