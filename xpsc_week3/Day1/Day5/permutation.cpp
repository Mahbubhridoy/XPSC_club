#include<bits/stdc++.h>
using namespace std;
const int N = 105;
int arr[N+1];

void reset()
{
    for(int i = 0; i < N; i++)
        arr[i] = 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;

    while(test--)
    {
        reset();
        int n, last_value = 0;
        cin >> n;
        vector<int> v[n];

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n-1; j++)
            {
                int x;
                cin >> x;
                v[i].push_back(x);
            }
            arr[v[i][n-2]]++;
        }
        int mx = 0, val = 0;
        for(int i = 1; i < 102; i++)
        {
            if(arr[i] > mx)
            {
                mx = arr[i];
                val = i;
            }
        }

        int i = 0;

        for(i = 0; i < n; i++)
        {
            if(v[i][n-2] != val)
                break;
        }

        for(int j = 0; j < n-1; j++)
            cout << v[i][j] << " ";

        cout << val << "\n";


    }

   return 0;

}
