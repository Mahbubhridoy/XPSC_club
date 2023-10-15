#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int test;cin>>test;
    while(test--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
 
        if(x1 < y1 && x2 < y2 && x1 < x2 && y1 < y2)
        {
            cout << "YES\n";
        }
        else if(x1 > y1 && x2 > y2 && x2 > x1 && y2 > y1)
        {
            cout << "YES\n";
        }
        else if(x1 > y1 && x2 > y2 && x1 > x2 && y1 > y2)
        {
            cout << "YES\n";
        }
        else if(y1 > x1 && y2 > x2 && x1 > x2 && y1 > y2)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
 

    }
        return 0;
}